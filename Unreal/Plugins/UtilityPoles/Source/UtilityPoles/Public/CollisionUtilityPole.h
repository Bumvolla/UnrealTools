// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CatenaryBase.h"
#include "Components/SphereComponent.h"
#include "CollisionUtilityPole.generated.h"

/**
 * 
 */
UCLASS()
class UTILITYPOLES_API ACollisionUtilityPole : public ACatenaryBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACollisionUtilityPole();

protected:

	AUtilityPolePreset* CastedPole;
	TArray<FVector> WireTargets;

private:

	USphereComponent* Collision;
	UChildActorComponent* Pole;

	void SetSphereRadius();

public:

	UFUNCTION(CallInEditor, Category = "Generation")
	virtual void Generate() override;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	float SphereSize = 1000;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	TSubclassOf<AUtilityPolePreset> PresetClass;

	UPROPERTY(EditInstanceOnly, Category = "Debug")
	bool bShowCollision = true;

};
