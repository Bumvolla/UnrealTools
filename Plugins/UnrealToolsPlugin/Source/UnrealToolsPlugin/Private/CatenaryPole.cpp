// Fill out your copyright notice in the Description page of Project Settings.


#include "CatenaryPole.h"

// Sets default values

FName ACatenaryPole::StaticMeshName(TEXT("PoleStaticMesh"));
FName ACatenaryPole::TargetName(TEXT("TargetBillboard"));

ACatenaryPole::ACatenaryPole(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{


 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(StaticMeshName);
	Mesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	RootComponent = Mesh;
}

void ACatenaryPole::BeginPlay()
{
}

void ACatenaryPole::OnConstruction(const FTransform& Transform)
{


}


