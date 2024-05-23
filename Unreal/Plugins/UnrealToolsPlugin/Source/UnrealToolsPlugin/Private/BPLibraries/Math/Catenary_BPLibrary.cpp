#include "BPLibraries/Math/Catenary_BPLibrary.h"
#include "BPLibraries/Mathfs_BPLibrary.h"
#include "UnrealToolsPlugin.h"
#include "DebugHeader.h"

UCatenary::UCatenary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

float UCatenary::Eval(const float x, const float a)
{
	return a * Cosh(x / a);
}

float UCatenary::EvalArcLength(const float x, const float a)
{
	return a * Sinh(x / a);
}

float UCatenary::EvalXByArcLength(const float s, const float a)
{
	return a * Asinh(s / a);
}

FVector2D UCatenary::EvalDerivByArcLength(const float s, const float a, const int n)
{
	if (n == 0) { // position
		float x = EvalXByArcLength(s, a);
		float y = Eval(x, a);
		return FVector2D(x, y);
	}
	float xNum = 0.f;
	float yNum = 0.f;
	float aSq = a * a;
	float sSq = s * s;

	if (n == 1) { // velocity
		xNum = a;
		yNum = s;
	}
	else if (n == 2) { // acceleration
		xNum = -a * s;
		yNum = aSq;
	}
	else if (n == 3) { // jerk/jolt
		xNum = a * (-aSq + 2 * sSq);
		yNum = 3 * aSq * s;
	}
	else if (n == 4) { // 4th derivative
		xNum = 3 * s * a * (-3 * aSq + 2 * sSq);
		yNum = 3 * aSq * (-aSq + 4 * sSq);
	}
	else {
		UE_LOG(Mathfs, Warning, TEXT("Derivative of Catenaries are not implemented"))
			PrintToNotification(TEXT("Derivative of Catenaries are not implemented"), 7.0f);
	}

	float den = pow(aSq + sSq, (n * 2 - 1) / 2.f);
	return FVector2D(xNum / den, yNum / den);
}



