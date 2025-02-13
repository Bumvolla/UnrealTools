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

}
