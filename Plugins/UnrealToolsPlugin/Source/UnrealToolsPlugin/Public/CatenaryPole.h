// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BillboardComponent.h"
#include "CatenaryPole.generated.h"

UCLASS()
class UNREALTOOLSPLUGIN_API ACatenaryPole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACatenaryPole(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

public:	

	UPROPERTY(Category = Catenary, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UMeshComponent> Mesh;

	static FName StaticMeshName;
	static FName TargetName;
	static UTexture2D* DefaultBillboardTexture;
	FTransform TargetPosition;
};
