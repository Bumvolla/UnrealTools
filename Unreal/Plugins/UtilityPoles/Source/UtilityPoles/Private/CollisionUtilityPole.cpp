// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionUtilityPole.h"

ACollisionUtilityPole::ACollisionUtilityPole()
{
    Pole = CreateDefaultSubobject<UChildActorComponent>(TEXT("Pole"));
    Pole->RegisterComponent();
    SetRootComponent(Pole);

    Collision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    Collision->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

}

void ACollisionUtilityPole::OnConstruction(const FTransform& Transform)
{
    if (autoGenerate) Generate();
    else
    {
        Collision->SetRelativeLocation(GetTransformsCenter());
        Collision->SetSphereRadius(SphereSize);
    }
}

TArray<ACollisionUtilityPole*> ACollisionUtilityPole::GetUtilityPolesInCollision()
{
    TSet<ACollisionUtilityPole*> PolesInColision;
    if (Collision)
    {
        TArray<AActor*> OverlappingActors = UEditorHelpers::GetObjectsInRadius(GetTransformsCenter(), SphereSize);
        for (AActor* Actor : OverlappingActors)
        {
            if (ACollisionUtilityPole* newPole = Cast<ACollisionUtilityPole>(Actor))
            {
                
                if (FVector::Dist(newPole->GetActorLocation(), GetActorLocation()) < SphereSize)
                {
                    if (newPole != this)
                    {
                        PolesInColision.Add(newPole);
                    }

                }
            }
        }
    }
    TArray<ACollisionUtilityPole*> SetOfPoles = PolesInColision.Array();
    if (!SetOfPoles.IsEmpty())
    {
        UE_LOG(LogTemp, Log, TEXT("UWU"))
    }
    return SetOfPoles;
}

FVector ACollisionUtilityPole::GetTransformsCenter()
{
    FVector Center = FVector::ZeroVector;

    if (!WireTargets.IsEmpty())
    {

        for (const FVector& Target : WireTargets)
        {
            Center += Target;
        }

        Center /= WireTargets.Num();

    }

    return Center;
}

void ACollisionUtilityPole::Generate()
{

    Collision->SetRelativeLocation(GetTransformsCenter());
    Collision->SetSphereRadius(SphereSize);

    ConectedUtilityPoles.Empty();

    if (Pole->GetChildActor()->StaticClass() != PresetClass->StaticClass())
        Pole->SetChildActorClass(PresetClass);

    TArray<ACollisionUtilityPole*> UtilityPolesInColision;
    UtilityPolesInColision = GetUtilityPolesInCollision();

    if (UtilityPolesInColision.IsEmpty())
    {
        RemoveSplines();
        RemoveSplineMeshes();
        return;
    }

    CastedPole = Cast<AUtilityPolePreset>(Pole->GetChildActor());
    if (!CastedPole) return;
    WireTargets = CastedPole->WireTargets;

    TArray<TArray<FVector>> AllCatenaryPoints;

    for (ACollisionUtilityPole* OverlappingPole : UtilityPolesInColision)
    {
        if (OverlappingPole->CastedPole)
        {
            AllCatenaryPoints.Append(CalculateCatenariesParalel({ CastedPole, OverlappingPole->CastedPole}));
            ConectedUtilityPoles.Add(OverlappingPole);
        }
    }

    if (ConectedUtilityPoles.IsEmpty()) return;

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
