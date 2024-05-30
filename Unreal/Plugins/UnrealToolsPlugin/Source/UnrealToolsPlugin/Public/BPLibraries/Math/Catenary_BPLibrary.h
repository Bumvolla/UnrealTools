#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPLibraries/Math/Mathfs_BPLibrary.h"
#include "Catenary_BPLibrary.generated.h"

UENUM()
enum EEvaluability {
	Unknown = 0,
	Catenary,
	LinearVertical,
	LineSegment
};

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

	UFUNCTION(BlueprintCallable, Category = "Catenary3D")
	static TArray<FVector> CreateCatenarySplinePoints(FVector startPoint, FVector endPoint,float Slack, int m_steps = 10);

};