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
    // Clear existing poles
    TArray<UChildActorComponent*> Keys;
    PoleIndices.GetKeys(Keys);
    for (UChildActorComponent* ChildActor : Keys)
    {
        if (ChildActor)
        {
            ChildActor->DestroyComponent(); // Destroy the component
        }
    }
    PoleIndices.Empty(); // Clear the map

    // Generate new poles along the spline
    int32 Iteration = 0;
    for (const FTransform& Transform : USplineHelpers::GetTransformPointsAlongSpline(Spline, DistanceBetweenObjects))
    {
        // Create a unique name for the new component
        FString CopyName = FString::Printf(TEXT("UtilityPole%i"), Iteration);

        // Create a new ChildActorComponent
        UChildActorComponent* Copy = NewObject<UChildActorComponent>(this, *CopyName);
        if (Copy)
        {
            Copy->SetChildActorClass(PresetClass); // Set the child actor class
            Copy->RegisterComponent(); // Register the component

            Copy->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

            Copy->SetRelativeTransform(Transform);

            // Add the component to the map
            PoleIndices.Add(Copy, Iteration);
        }

        Iteration++;
    }
}
