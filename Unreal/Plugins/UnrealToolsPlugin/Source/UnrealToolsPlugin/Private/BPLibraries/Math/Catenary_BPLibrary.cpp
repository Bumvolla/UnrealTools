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

TArray<FVector> UCatenary3D::CreateCatenaryNewton(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps)
{

	float TotalDistance = FVector::Dist(StartPoint, EndPoint);
	float HorizontalDistance = FVector::Dist(
		FVector(EndPoint.X, EndPoint.Y, StartPoint.Z),
		StartPoint
	);
	float CableLength = TotalDistance + FMath::Max(0.0001f, Slack);
	float HeightDiff = EndPoint.Z - StartPoint.Z;

	float TargetRatio = FMath::Sqrt(
		FMath::Pow(CableLength, 2.f) - FMath::Pow(HeightDiff, 2.f)
	) / HorizontalDistance;

	float Z = FindParameterNewton(TargetRatio);

	float A = HorizontalDistance / (2.0f * Z);
	float P = (HorizontalDistance - A * FMath::Loge(
		(CableLength + HeightDiff) / (CableLength - HeightDiff)
	)) / 2.0f;
	float Q = (EndPoint.Z + StartPoint.Z -
		CableLength * FMath::Cosh(Z) / FMath::Sinh(Z)) / 2.0f;

	TArray<FVector> Points;
	Points.SetNum(Steps);

	for (int32 i = 0; i < Steps; ++i)
	{
		float T = static_cast<float>(i) / (Steps - 1);

		FVector Pos;
		Pos.X = FMath::Lerp(StartPoint.X, EndPoint.X, T);
		Pos.Y = FMath::Lerp(StartPoint.Y, EndPoint.Y, T);
		Pos.Z = A * FMath::Cosh((T * HorizontalDistance - P) / A) + Q;

		Points[i] = Pos;
	}

	return Points;
}

TArray<FVector> UCatenary3D::CreateCatenaryFast(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps)
{

	float TotalDistance = FVector::Dist(StartPoint, EndPoint);
	float HorizontalDistance = FVector::Dist(
		FVector(EndPoint.X, EndPoint.Y, StartPoint.Z),
		StartPoint
	);
	float CableLength = TotalDistance + FMath::Max(0.0001f, Slack);
	float HeightDiff = EndPoint.Z - StartPoint.Z;

	float TargetRatio = FMath::Sqrt(
		FMath::Pow(CableLength, 2.f) - FMath::Pow(HeightDiff, 2.f)
	) / HorizontalDistance;

	float Z = FindParameterApproximate(TargetRatio);

	float A = HorizontalDistance / (2.0f * Z);
	float P = (HorizontalDistance - A * FMath::Loge(
		(CableLength + HeightDiff) / (CableLength - HeightDiff)
	)) / 2.0f;
	float Q = (EndPoint.Z + StartPoint.Z -
		CableLength * FMath::Cosh(Z) / FMath::Sinh(Z)) / 2.0f;

	TArray<FVector> Points;
	Points.SetNum(Steps);

	for (int32 i = 0; i < Steps; ++i)
	{
		float T = static_cast<float>(i) / (Steps - 1);

		FVector Pos;
		Pos.X = FMath::Lerp(StartPoint.X, EndPoint.X, T);
		Pos.Y = FMath::Lerp(StartPoint.Y, EndPoint.Y, T);
		Pos.Z = A * FMath::Cosh((T * HorizontalDistance - P) / A) + Q;

		Points[i] = Pos;
	}

	return Points;
}

TArray<FVector> UCatenary3D::CreateCatenaryFixed(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps)
{

	// Same as Newton version but using FindParameterApproximate
	float TotalDistance = FVector::Dist(StartPoint, EndPoint);
	float HorizontalDistance = FVector::Dist(
		FVector(EndPoint.X, EndPoint.Y, StartPoint.Z),
		StartPoint
	);
	float CableLength = TotalDistance + FMath::Max(0.0001f, Slack);
	float HeightDiff = EndPoint.Z - StartPoint.Z;

	float TargetRatio = FMath::Sqrt(
		FMath::Pow(CableLength, 2.f) - FMath::Pow(HeightDiff, 2.f)
	) / HorizontalDistance;

	float Z = FindParameterFixed(TargetRatio);

	float A = HorizontalDistance / (2.0f * Z);
	float P = (HorizontalDistance - A * FMath::Loge(
		(CableLength + HeightDiff) / (CableLength - HeightDiff)
	)) / 2.0f;
	float Q = (EndPoint.Z + StartPoint.Z -
		CableLength * FMath::Cosh(Z) / FMath::Sinh(Z)) / 2.0f;

	TArray<FVector> Points;
	Points.SetNum(Steps);

	for (int32 i = 0; i < Steps; ++i)
	{
		float T = static_cast<float>(i) / (Steps - 1);

		FVector Pos;
		Pos.X = FMath::Lerp(StartPoint.X, EndPoint.X, T);
		Pos.Y = FMath::Lerp(StartPoint.Y, EndPoint.Y, T);
		Pos.Z = A * FMath::Cosh((T * HorizontalDistance - P) / A) + Q;

		Points[i] = Pos;
	}

	return Points;
}

float UCatenary3D::FindParameterNewton(float TargetRatio)
{
	float Z = 1.0f;  // Initial guess
	constexpr int32 MAX_ITERATIONS = 8;
	constexpr float TOLERANCE = 0.01f;

	for (int32 i = 0; i < MAX_ITERATIONS; ++i)
	{
		float Ratio = FMath::Sinh(Z) / Z;
		float Derivative = (FMath::Cosh(Z) * Z - FMath::Sinh(Z)) / (Z * Z);

		float Delta = (Ratio - TargetRatio) / Derivative;
		Z -= Delta;

		if (FMath::Abs(Delta) < TOLERANCE)
			break;
	}

	return Z;
}

float UCatenary3D::FindParameterApproximate(float TargetRatio)
{
	// Quick approximation for different ranges
	if (TargetRatio < 1.2f)
		return 2.0f * (TargetRatio - 1.0f);

	if (TargetRatio < 2.0f)
		return 1.0f + FMath::Sqrt(6.0f * (TargetRatio - 1.0f));

	return FMath::Loge(2.0f * TargetRatio);
}

float UCatenary3D::FindParameterFixed(float TargetRatio)
{
	float Z = 1.0f;
	constexpr int32 MAX_STEPS = 8;
	float StepSize = 10.0f;

	for (int32 i = 0; i < MAX_STEPS; ++i)
	{
		for (int32 j = 0; j < 5; ++j)
		{
			float TestZ = Z + StepSize;
			float Ratio = FMath::Sinh(TestZ) / TestZ;

			if (std::isinf(Ratio))
				break;

			if (FMath::Abs(Ratio - TargetRatio) < 0.05f)
				return TestZ;

			if (Ratio > TargetRatio)
				break;

			Z = TestZ;
		}
		StepSize *= 0.2f;
	}
	return Z;
}
