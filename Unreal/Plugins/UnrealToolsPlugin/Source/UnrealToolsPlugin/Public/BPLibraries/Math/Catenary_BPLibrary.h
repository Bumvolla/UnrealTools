#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPLibraries/Math/Mathfs_BPLibrary.h"
#include "Catenary_BPLibrary.generated.h"

UCLASS()
class UCatenary : public UMathfsBPLibrary
{

	GENERATED_UCLASS_BODY()

public:

	//Returns the y coordinate of a catenary at the given x value
	//The x coordinate to evaluate at
	//The a - parameter of the catenary
	UFUNCTION(BlueprintCallable, Category = "Catenary")
	static float Eval(const float x, const float a);

	//Evaluates the arc length from the apex of the catenary, to the given x coordinate
	UFUNCTION(BlueprintCallable, Category = "Catenary")
	static float EvalArcLength(const float x, const float a);

	//Evaluates the x coordinate at the given arc length relative to the apex of the catenary.
	UFUNCTION(BlueprintCallable, Category = "Catenary")
	static float EvalXByArcLength(const float s, const float a);

	//Evaluates the n:th 2D derivative at the given arc length relative to the apex of the catenary.
	UFUNCTION(BlueprintCallable, Category = "Catenary")
	static FVector2D EvalDerivByArcLength(const float s, const float a, const int n = 1);


};

UCLASS()
class UCatenary3D : public UCatenary
{
	GENERATED_UCLASS_BODY()

public:

	// Newton's Method - Most accurate
	UFUNCTION(BlueprintCallable, Category = "Catenary")
	static TArray<FVector> CreateCatenaryNewton(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps);

	// Quick Approximation - Fastest but less accurate
	UFUNCTION(BlueprintCallable, Category = "Catenary")
	static TArray<FVector> CreateCatenaryFast(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps);

	// Fixed-point iteration - Balance of speed and accuracy
	UFUNCTION(BlueprintCallable, Category = "Catenary")
	static TArray<FVector> CreateCatenaryFixed(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps);

private:
	static float FindParameterNewton(float TargetRatio);
	static float FindParameterApproximate(float TargetRatio);
	static float FindParameterFixed(float TargetRatio);

};