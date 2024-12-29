// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "SplineHelpers.generated.h"

/**
 * 
 */
UCLASS()
class UTILITYPOLES_API USplineHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Spline Construction Script Tools")
	static TArray<FTransform> GetTransformPointsAlongSpline(const USplineComponent* spline, float distBetweenObjects);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Construction Script Tools")
	static float GetMeshLenght(const UStaticMesh* Mesh, EAxis::Type Axis);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Spline Construction Script Tools")
	static int GetMeshesCountInSpline(const USplineComponent* Spline, const UStaticMesh* Mesh, EAxis::Type Axis);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Spline Construction Script Tools")
	static void GetSplineMeshStartAndEndByIteration(const int Index, const float Bound, const USplineComponent* Spline, FVector& StartPosition, FVector& StartTangent, FVector& EndPosition, FVector& EndTangent);



};
