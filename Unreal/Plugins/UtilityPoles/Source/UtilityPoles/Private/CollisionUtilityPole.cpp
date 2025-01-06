// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionUtilityPole.h"

ACollisionUtilityPole::ACollisionUtilityPole()
{
    Pole = CreateDefaultSubobject<UChildActorComponent>(TEXT("Pole"));
    Pole->RegisterComponent();
    Pole->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
    SetRootComponent(Pole);

    Collision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    Collision->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
    SetSphereRadius();

}

TArray<ACollisionUtilityPole*> ACollisionUtilityPole::GetUtilityPolesInCollision()
{
    TSet<AActor*> ActorsInColision;
    Collision->GetOverlappingActors(ActorsInColision, StaticClass());

    TArray<ACollisionUtilityPole*> PolesInColision;

    if (!ActorsInColision.IsEmpty())
    {
        for (AActor* Actor : ActorsInColision)
        {
            PolesInColision.Add(Cast<ACollisionUtilityPole>(Actor));
        }
    }
    return PolesInColision;
}

void ACollisionUtilityPole::SetSphereRadius()
{
    if (!WireTargets.IsEmpty())
    {
        FVector Center = FVector::ZeroVector;

        for (const FVector& Target : WireTargets)
        {
            Center += Target;
        }

        Center /= WireTargets.Num();

        Collision->SetRelativeLocation(Center);
    }

    Collision->SetSphereRadius(SphereSize);
}

void ACollisionUtilityPole::Generate()
{
    Pole->SetChildActorClass(PresetClass);
    CastedPole = Cast<AUtilityPolePreset>(Pole->GetChildActor());

    if (CastedPole)
        WireTargets = CastedPole->WireTargets;

    SetSphereRadius();

    UtilityPolesInColision = GetUtilityPolesInCollision();

    TArray<TArray<FVector>> AllCatenaryPoints;


    for (int32 i = 0; i < UtilityPolesInColision.Num(); i++)
    {
        if (!ConectedUtilityPoles.Contains(UtilityPolesInColision[i]))
        {
            AUtilityPolePreset* PoleToConect = Cast<AUtilityPolePreset>(UtilityPolesInColision[i]->Pole->GetChildActor());
            AllCatenaryPoints.Append(CalculateCatenariesParalel({ CastedPole, PoleToConect }));
            ConectedUtilityPoles.Add(UtilityPolesInColision[i]);
        }

    }


    if (ConectedUtilityPoles.IsEmpty()) return;

    for (int32 i = 0; i < ConectedUtilityPoles.Num(); i++)
    {
        if (!UtilityPolesInColision.Contains(ConectedUtilityPoles[i]))
        {
            ConectedUtilityPoles.RemoveAt(i);
        }
    }

    RemoveExcesSplines(CastedPole->WireTargets.Num()*ConectedUtilityPoles.Num());

    // Create or reuse spline components
    ReuseOrCreateSplines();

    //Handles destruction of all previously generated spline meshes
    RemoveSplineMeshes();

    if (AllCatenaryPoints.IsEmpty()) return;

    //Assign spline points
    for (int32 i = 0; i < AllWires.Num(); i++)
    {
        AllWires[i]->SetSplinePoints(AllCatenaryPoints[i], ESplineCoordinateSpace::Local);
    }

    // Constructs spline meshes along each spline
    for (int32 i = 0; i < AllWires.Num(); i++)
    {
        ConstructSplineMeshesAlongSplines(AllWires[i]);
    }

}
