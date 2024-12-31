// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"

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

	TMap<UChildActorComponent*, int32> PoleIndices;

	UPROPERTY(VisibleAnywhere, Category = "Spline")
	USplineComponent* Spline;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(CallInEditor, Category = "Generation")
	void Generate();


	UPROPERTY(EditInstanceOnly, Category = "Generation")
	float DistanceBetweenObjects = 1000;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	TSubclassOf<AUtilityPolePreset> PresetClass;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	int32 SplineResolution = 10;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	bool autoGenerate = false;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	float Slack = 100;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	UStaticMesh* WireMesh;

	UPROPERTY(EditInstanceOnly, Category = "Generation")
	EAxis::Type WireMeshAxis;

};
