// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineUtilityPole.h"

// Sets default values
ASplineUtilityPole::ASplineUtilityPole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));

	SetRootComponent(Spline);

    bRunConstructionScriptOnDrag = false;

}

// Called when the game starts or when spawned
void ASplineUtilityPole::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASplineUtilityPole::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    if (autoGenerate) Generate();
}

void ASplineUtilityPole::GenerateCables()
{

    // Setup
    if (!WireMesh) return;
    float MeshLenght = USplineHelpers::GetMeshLenght(WireMesh, WireMeshAxis);

    TArray<UChildActorComponent*> Keys;
    PoleIndices.GetKeys(Keys);
    const int32 PolesAmount = Keys.Num();
    if (PolesAmount < 2) return;

    TArray<AUtilityPolePreset*> CastedKeys;
    CastedKeys.Reserve(PolesAmount);
    for (int32 i = 0; i < Keys.Num(); i++)
    {
        if (AUtilityPolePreset* Pole = Cast<AUtilityPolePreset>(Keys[i]->GetChildActor()))
        {
            CastedKeys.Add(Pole);
        }
    }

    uint16 CastedKeysAmm = CastedKeys.Num();

    bool bSplineClosed = Spline->IsClosedLoop();

    int wirePointsAmmount = bSplineClosed ? CastedKeysAmm * SplineResolution : (CastedKeysAmm - 1) * SplineResolution;

    if (CastedKeysAmm < 2) return;

    TArray<FVector> localSpaceWireTargets = CastedKeys[0]->CableTargets;
    uint8 TransformsAmount = localSpaceWireTargets.Num();


    // Pre-calculate all catenary points in parallel
    TArray<TSet<FVector>> AllCatenaryPoints;
    AllCatenaryPoints.SetNum(TransformsAmount);


    ParallelFor(TransformsAmount, [&](int32 i) {
        for (int32 j = 0; j < CastedKeysAmm; j++)
        {
            bool bIsLast = false;

            FTransform currentPos = CastedKeys[j]->GetActorTransform();
            FTransform nextPos;

            if (CastedKeys.IsValidIndex(j+1))
            {
                nextPos = CastedKeys[j + 1]->GetActorTransform();

                if (!CastedKeys.IsValidIndex(j + 2))
                {
                    bIsLast = true;
                }
            }
            else
            {
                bIsLast = true;
                if (bSplineClosed)
                {
                    nextPos = CastedKeys[0]->GetActorTransform();
                }
                else break;
            }

            TArray<FVector> CatenaryPoints = UCatenaryHelpers::CreateCatenaryNewton(
                currentPos.TransformPosition(localSpaceWireTargets[i]),
                nextPos.TransformPosition(localSpaceWireTargets[i]),
                Slack,
                SplineResolution);

            if (!bIsLast)
            {
                CatenaryPoints.Pop();
                AllCatenaryPoints[i].Append(CatenaryPoints);
            }
            else
            {
                AllCatenaryPoints[i].Append(CatenaryPoints);
                break;
            }
        }
        });



    //Handles exces previously generated splines 
    int16 wiresAmmount = AllWires.Num();
    if (TransformsAmount < wiresAmmount)
    {
        for (int16 i = TransformsAmount; i < wiresAmmount; i++)
        {
            AllWires[i]->DestroyComponent();
        }

    }
    AllWires.SetNum(TransformsAmount);

    //Handles destruction of all previously generated spline meshes
    if (!AllSplineMeshes.IsEmpty())
    {
        for (USplineMeshComponent* splineMesh : AllSplineMeshes)
        {
            splineMesh->DestroyComponent();
        }
        AllSplineMeshes.Empty();
    }


    // Create or reuse components and assign its values
    for (int16 i = 0; i < TransformsAmount; i++)
    {
        USplineComponent* Wire;


        if (AllWires[i])
        {
            Wire = AllWires[i];
            Wire->SetSplinePoints(AllCatenaryPoints[i].Array(), ESplineCoordinateSpace::World);
        }
        else
        {
            Wire = NewObject<USplineComponent>(this);
            Wire->RegisterComponent();
            Wire->SetSplinePoints(AllCatenaryPoints[i].Array(), ESplineCoordinateSpace::World);
            AllWires.Add(Wire);
        }

        Wire->SetVisibility(bShowSplines, false);

        int32 SegmentStartPoint = 0;
        int32 SegmentEndPoint = SplineResolution-1;
        int32 iAtSegment = 0;

        while (SegmentEndPoint < AllCatenaryPoints[i].Num())
        {

            USplineMeshComponent* splineMesh = NewObject<USplineMeshComponent>(this);
            splineMesh->RegisterComponent();
            splineMesh->AttachToComponent(Wire, FAttachmentTransformRules::KeepRelativeTransform);

            FVector StartPoint, StartTangent, EndPoint, EndTangent;
            USplineHelpers::GetSplineMeshStartAndEndByIteration(iAtSegment, MeshLenght, Wire, StartPoint, StartTangent, EndPoint, EndTangent, Wire->GetDistanceAlongSplineAtSplinePoint(SegmentStartPoint));

            if (iAtSegment == 0)
            {
                Wire->GetLocationAndTangentAtSplinePoint(SegmentStartPoint, StartPoint, StartTangent, ESplineCoordinateSpace::Local);
            }

            if (iAtSegment+1 > USplineHelpers::GetMeshCountBewteenSplinePoints(Wire, WireMesh, WireMeshAxis, SegmentStartPoint, SegmentEndPoint))
            {
                Wire->GetLocationAndTangentAtSplinePoint(SegmentEndPoint, EndPoint, EndTangent, ESplineCoordinateSpace::Local);
                SegmentStartPoint = SegmentEndPoint;
                SegmentEndPoint += SplineResolution-1;
                iAtSegment = 0;
            }
            else 
            {
                iAtSegment++;
            }


            splineMesh->SetStartAndEnd(StartPoint, StartTangent, EndPoint, EndTangent);
            splineMesh->SetStaticMesh(WireMesh);
            splineMesh->SetForwardAxis(ESplineMeshAxis::X);

            AllSplineMeshes.Add(splineMesh);
        }
    }
}

void ASplineUtilityPole::Generate()
{
    // Setup
    TArray<FTransform> Transforms = USplineHelpers::GetTransformPointsAlongSpline(Spline, DistanceBetweenObjects);
    TArray<UChildActorComponent*> Keys;
    PoleIndices.GetKeys(Keys);

    const int32 ExistingPoleCount = PoleIndices.Num();
    const int32 NeededPoleCount = Transforms.Num();

    // Handle exces poles
    if (NeededPoleCount < ExistingPoleCount)
    {
        for (int32 i = NeededPoleCount; i < ExistingPoleCount; i++)
        {
            uint32 KeyHash = GetTypeHash(Keys[i]);
            UActorComponent* Component = Keys[i];
            PoleIndices.RemoveByHash(KeyHash, Keys[i]);
            Component->DestroyComponent();
        }
    }

    // Create or reuse components and assign its values
    for (int32 Iteration = 0; Iteration < NeededPoleCount; Iteration++)
    {
        const FTransform& Transform = Transforms[Iteration];
        UChildActorComponent* ExistingPole = Iteration < Keys.Num() ? Keys[Iteration] : nullptr;


        if (ExistingPole)
        {
            ExistingPole->SetRelativeTransform(Transform);
            PoleIndices[ExistingPole] = Iteration;
        }
        else
        {
            FString PoleName = FString::Printf(TEXT("UtilityPole%i"), Iteration);
            UChildActorComponent* NewPole = NewObject<UChildActorComponent>(this, *PoleName);
            NewPole->SetChildActorClass(PresetClass);
            NewPole->RegisterComponent();
            NewPole->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
            NewPole->SetRelativeTransform(Transform);
            PoleIndices.Add(NewPole, Iteration);

        }
    }

    // On finish generate wires
    GenerateCables();

}
