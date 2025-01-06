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

TArray<AUtilityPolePreset*> ACollisionUtilityPole::GetUtilityPolesInCollision()
{
    TArray<AUtilityPolePreset*> PolesInColision;
    if (Collision)
    {
        TArray<AActor*> OverlappingActors;
        Collision->GetOverlappingActors(OverlappingActors);

        for (AActor* Actor : OverlappingActors)
        {
            if (AUtilityPolePreset* newPole = Cast<AUtilityPolePreset>(Actor))
            {
                PolesInColision.Add(newPole);
            }
        }

        if (PolesInColision.Contains(Cast<AUtilityPolePreset>(Pole->GetChildActor())))
        {
            PolesInColision.Remove(Cast<AUtilityPolePreset>(Pole->GetChildActor()));
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

    for (AUtilityPolePreset* OverlappingPole : UtilityPolesInColision)
    {
        if (!ConectedUtilityPoles.Contains(OverlappingPole))
        {
            AllCatenaryPoints.Append(CalculateCatenariesParalel({ CastedPole, OverlappingPole }));
            ConectedUtilityPoles.Add(OverlappingPole);
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
