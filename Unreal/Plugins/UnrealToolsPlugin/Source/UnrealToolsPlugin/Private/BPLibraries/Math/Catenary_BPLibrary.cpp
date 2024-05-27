#include "BPLibraries/Math/Catenary_BPLibrary.h"
#include "BPLibraries/Math/Mathfs_BPLibrary.h"
#include "UnrealToolsPlugin.h"
#include "DebugHeader.h"

UCatenary::UCatenary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}
UCatenary3D::UCatenary3D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
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







TArray<FVector> UCatenary3D::CreateCatenarySplinePoints(FVector startPoint, FVector endPoint,float Slack, int m_steps)
{
	float lineDist = FVector::Dist(startPoint, endPoint);
	float lineDistH = FVector::Dist(FVector (endPoint.X, endPoint.Y,startPoint.Z), startPoint);
	float length = lineDist + FMath::Max(0.0001f, Slack);
	float r = 0.f;
	float s = startPoint.Z;
	float u = lineDistH;
	float v = endPoint.Z;


	float ZTarget = FMath::Sqrt(FMath::Pow(length, 2.f) - FMath::Pow(v - s, 2.f)) / (u - r);

	int loops = 30;
	int iterationCount = 0;
	int maxIterations = loops * 10; // For safety.
	bool found = false;

	double z = 0.0f;
	float ztest = 0.0f;
	float zstep = 100.0f;
	float ztesttarget = 0.0f;

	for (int i = 0; i < loops; i++) {
		for (int j = 0; j < 10; j++) {
			iterationCount++;
			ztest = z + zstep;
			ztesttarget = FMath::Sinh(ztest) / ztest;

			if (std::isinf(ztesttarget))
				continue;

			if (ztesttarget == ZTarget) {
				found = true;
				z = ztest;
				break;
			}
			else if (ztesttarget > ZTarget) {
				break;
			}
			else {
				z = ztest;
			}

			if (iterationCount > maxIterations) {
				found = true;
				break;
			}
		}

		if (found)
			break;

		zstep *= 0.1f;
	}


	float a = (u - r) / (2.0f * z);
	float p = (r + u - a * FMath::Loge((length + v - s) / (length - v + s))) / 2.0f;
	float q = (v + s - length * FMath::Cosh(z) / FMath::Sinh(z)) / 2.0f;


		FString zefe = FString::SanitizeFloat(FMath::Cosh(z));
		PrintLog(zefe);

		TArray<FVector> points;
		points.SetNum(m_steps);

		float stepsf = m_steps - 1;
		float stepf;

		for (int i = 0; i < m_steps; i++) {
			stepf = i / stepsf;
			FVector pos;
			pos = FVector(0, 0, 0);
			pos.X = FMath::Lerp(startPoint.X, endPoint.X, stepf);
			pos.Y = FMath::Lerp(startPoint.Y, endPoint.Y, stepf);
			pos.Z = a * FMath::Cosh(((stepf * lineDistH) - p) / a) + q;



			points[i] = pos;
		}
		
		return points;
}
