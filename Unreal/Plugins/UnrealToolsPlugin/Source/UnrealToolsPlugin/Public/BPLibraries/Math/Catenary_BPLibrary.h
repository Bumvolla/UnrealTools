#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPLibraries/Mathfs_BPLibrary.h"
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

	//UFUNCTION(BlueprintCallable, Category = "CatenaryToPoint")
	//static FVector2D EvalStraightLineByArcLength(float sEval, FCatenaryToPoint CatenaryValues);

};

//UCLASS()
//class UCatenary3D : public UCatenary
//{
//	GENERATED_UCLASS_BODY()
//
//public:
//
//	FVector p1;
//	FCatenaryToPoint cat2D; // also stores arc length
//	FPlane2DIn3D space; // stores p0 and slack direction
//	EEvaluability evaluability;
//
//};