// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineUtilityPole.h"
#include "SplineHelpers.h"
#include "Components/ChildActorComponent.h"

// Sets default values
ASplineUtilityPole::ASplineUtilityPole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));

	SetRootComponent(Spline);

	Spline->AddSplinePoint(FVector(0., 0., 0.), ESplineCoordinateSpace::Local);

	DistanceBetweenObjects = 1000;

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

// Called every frame
void ASplineUtilityPole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASplineUtilityPole::Generate()
{
    TArray<FTransform> Transforms = USplineHelpers::GetTransformPointsAlongSpline(Spline, DistanceBetweenObjects);
    TArray<UChildActorComponent*> Keys;
    PoleIndices.GetKeys(Keys);

    const int32 ExistingPoleCount = PoleIndices.Num();
    const int32 NeededPoleCount = Transforms.Num();

    if (NeededPoleCount < ExistingPoleCount)
    {
        for (int i = NeededPoleCount; i < ExistingPoleCount; i++)
        {
            uint32 KeyHash = GetTypeHash(Keys[i]);
            UActorComponent* Component = Keys[i];
            PoleIndices.RemoveByHash(KeyHash, Keys[i]);
            Component->DestroyComponent();
        }
    }

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
            if (NewPole)
            {
                NewPole->SetChildActorClass(PresetClass);
                NewPole->RegisterComponent();
                NewPole->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
                NewPole->SetRelativeTransform(Transform);
                PoleIndices.Add(NewPole, Iteration);
            }
        }
    }
}
