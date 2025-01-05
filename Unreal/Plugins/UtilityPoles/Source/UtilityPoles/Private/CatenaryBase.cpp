// Fill out your copyright notice in the Description page of Project Settings.

#include "CatenaryBase.h"
#include "UtilityPoles.h"

// Sets default values
ACatenaryBase::ACatenaryBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ACatenaryBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

    if (autoGenerate) Generate();
}

void ACatenaryBase::Generate()
{

}

void ACatenaryBase::SetMeshLenght()
{
    MeshLenght = USplineHelpers::GetMeshLenght(WireMesh, WireMeshAxis);
}

void ACatenaryBase::RemoveExcesSplines(int32 NeededSplines)
{
    int16 wiresAmmount = AllWires.Num();

    if (NeededSplines < wiresAmmount)
    {
        for (int16 i = NeededSplines; i < wiresAmmount; i++)
        {
            AllWires[i]->DestroyComponent();
        }

    }
    AllWires.SetNum(NeededSplines);
    UE_LOG(LogUtilityPoles, Log, TEXT("Wires ammount set to %i"), NeededSplines);
}

void ACatenaryBase::RemoveSplineMeshes()
{
    if (!AllSplineMeshes.IsEmpty())
    {
        for (USplineMeshComponent* splineMesh : AllSplineMeshes)
        {
            splineMesh->DestroyComponent();
        }
        AllSplineMeshes.Empty();
    }
}

void ACatenaryBase::ReuseOrCreateSplines()
{

    for (int16 i = 0; i < AllWires.Num(); i++)
    {
        USplineComponent* Wire;

        if (!AllWires[i])
        {
            Wire = NewObject<USplineComponent>(this);
            Wire->RegisterComponent();
            AllWires[i]=Wire;
        }
    }

}

TArray<FVector> ACatenaryBase::CalculateSingleCatenary(TArray<FVector> ConectionPoints, bool bIsClosedLoop)
{
    TArray<FVector> AllCatenaryPoints;

    if (ConectionPoints.Num() == 0)
    {
        return AllCatenaryPoints;
    }

    FTransform actorPos = GetActorTransform();

    bool bIsLast = false;

    for (int32 i = 0; i < ConectionPoints.Num(); i++)
    {
        const FVector currentPos = actorPos.InverseTransformPosition(ConectionPoints[i]);
        FVector nextPos;

        if(ConectionPoints.IsValidIndex(i+1))
        {
            nextPos = actorPos.InverseTransformPosition(ConectionPoints[i+1]);
            if (!ConectionPoints.IsValidIndex(i + 2))
            {
                bIsLast = true;
            }
        }
        else
        {
            bIsLast = true;
            if (bIsClosedLoop)
            {
                nextPos = actorPos.InverseTransformPosition(ConectionPoints[0]);
            }
            else break;
        }

        TArray<FVector> CatenaryPoints = UCatenaryHelpers::CreateCatenaryNewton(
            currentPos,
            nextPos,
            Slack,
            SplineResolution);

        if (!bIsLast)
        {
            CatenaryPoints.Pop();
            AllCatenaryPoints.Append(CatenaryPoints);
        }
        else
        {
            AllCatenaryPoints.Append(CatenaryPoints);
            break;
        }

    }

    return AllCatenaryPoints;

}

TArray<TArray<FVector>> ACatenaryBase::CalculateCatenariesParalel(TArray<AUtilityPolePreset*> ConectionPoints, bool bIsClosedLoop)
{

    TArray<TArray<FVector>> AllCatenaryPoints;

    if (ConectionPoints.IsEmpty())
    {
        return AllCatenaryPoints;
    }

    TArray<FVector> localSpaceWireTargets = ConectionPoints[0]->WireTargets;

    // Pre-calculate all catenary points in parallel
    const int32 WiresNum = localSpaceWireTargets.Num();
    AllCatenaryPoints.SetNum(WiresNum);


    ParallelFor(WiresNum, [&](int32 i) {
        for (int32 j = 0; j < ConectionPoints.Num(); j++)
        {
            bool bIsLast = false;

            FTransform currentPos = ConectionPoints[j]->GetActorTransform();
            FTransform nextPos;

            if (ConectionPoints.IsValidIndex(j + 1))
            {
                nextPos = ConectionPoints[j + 1]->GetActorTransform();

                if (!ConectionPoints.IsValidIndex(j + 2))
                {
                    bIsLast = true;
                }
            }
            else
            {
                bIsLast = true;
                if (bIsClosedLoop)
                {
                    nextPos = ConectionPoints[0]->GetActorTransform();
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
    return AllCatenaryPoints;
}

void ACatenaryBase::ConstructSplineMeshesAlongSplines(USplineComponent* Spline)
{

    USplineComponent* Wire = Spline;

    int32 SegmentStartPoint = 0;
    int32 SegmentEndPoint = SplineResolution - 1;
    int32 iAtSegment = 0;


    while (SegmentEndPoint < Spline->GetNumberOfSplinePoints())
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

        if (iAtSegment + 1 > USplineHelpers::GetMeshCountBewteenSplinePoints(Wire, WireMesh, WireMeshAxis, SegmentStartPoint, SegmentEndPoint))
        {
            Wire->GetLocationAndTangentAtSplinePoint(SegmentEndPoint, EndPoint, EndTangent, ESplineCoordinateSpace::Local);
            SegmentStartPoint = SegmentEndPoint;
            SegmentEndPoint += SplineResolution - 1;
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


