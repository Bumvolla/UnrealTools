// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/ChildActorComponent.h"

#include "SplineHelpers.h"
#include "UtilityPolePreset.h"

#include "SplineUtilityPole.generated.h"

UCLASS()
class UTILITYPOLES_API ASplineUtilityPole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplineUtilityPole();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

	void GenerateCables();


	UPROPERTY(VisibleAnywhere, Category = "Spline")
	USplineComponent* Spline;

private:

	TMap<UChildActorComponent*, int32> PoleIndices;
	TArray<USplineComponent*> AllWires;
	TArray<USplineMeshComponent*> AllSplineMeshes;


public:	

	UFUNCTION(CallInEditor, Category = "Generation")
	void Generate();

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	float DistanceBetweenObjects = 1000;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	TSubclassOf<AUtilityPolePreset> PresetClass;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	uint16 SplineResolution = 10;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	bool autoGenerate = false;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	float Slack = 100;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	UStaticMesh* WireMesh;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	TEnumAsByte<EAxis::Type> WireMeshAxis = EAxis::X;

};
