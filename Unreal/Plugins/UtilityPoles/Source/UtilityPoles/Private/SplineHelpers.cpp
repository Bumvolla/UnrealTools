// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineHelpers.h"

TArray<FTransform> USplineHelpers::GetTransformPointsAlongSpline(const USplineComponent* spline, const float distBetweenObjects)
{
	float splineLength = spline->GetSplineLength();
	int32 instancesToSpawn = FMath::CeilToInt(splineLength / distBetweenObjects);

	TArray<FTransform> SpawnPointsTransform;

	for (int32 i = 0; i <= instancesToSpawn; i++)
	{
		float distanceAlongSpline = (splineLength / instancesToSpawn) * i;
		SpawnPointsTransform.Add(spline->GetTransformAtDistanceAlongSpline(distanceAlongSpline, ESplineCoordinateSpace::Local));
	}

	return SpawnPointsTransform;
}

float USplineHelpers::GetMeshLenght(const UStaticMesh* Mesh, EAxis::Type Axis)
{
	FVector MinBoundingBox = Mesh->GetBoundingBox().Min;
	FVector MaxBoundingBox = Mesh->GetBoundingBox().Max;

	switch (Axis)
	{
	case EAxis::X:
		return FMath::Abs(MinBoundingBox.X) + FMath::Abs(MaxBoundingBox.X);
		break;
	case EAxis::Y:
		return FMath::Abs(MinBoundingBox.Y) + FMath::Abs(MaxBoundingBox.Y);
		break;
	case EAxis::Z:
		return FMath::Abs(MinBoundingBox.Z) + FMath::Abs(MaxBoundingBox.Z);
		break;
	default:
		return FMath::Abs(MinBoundingBox.X) + FMath::Abs(MaxBoundingBox.X);
		break;
	}

}

int USplineHelpers::GetMeshesCountInSpline(const USplineComponent* Spline, const UStaticMesh* Mesh, EAxis::Type Axis)
{
	return FMath::TruncToInt(Spline->GetSplineLength() / GetMeshLenght(Mesh, Axis) * 2);
}

void USplineHelpers::GetSplineMeshStartAndEndByIteration(const int32 Index, const float Bound, const USplineComponent* Spline, FVector& StartPosition, FVector& StartTangent, FVector& EndPosition, FVector& EndTangent)
{
	float StartDistance = Index * Bound;
	float EndDistance = (Index + 1) * Bound;

	StartPosition = Spline->GetLocationAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local);
	StartTangent = Spline->GetTangentAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local).GetClampedToSize(0, Bound);
	EndPosition = Spline->GetLocationAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local);
	EndTangent = Spline->GetTangentAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local).GetClampedToSize(0, Bound);
}

TArray<FVector> UCatenaryHelpers::CreateCatenaryNewton(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps)
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

TArray<FVector> UCatenaryHelpers::CreateCatenaryFast(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps)
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

TArray<FVector> UCatenaryHelpers::CreateCatenaryFixed(const FVector& StartPoint, const FVector& EndPoint, float Slack, int32 Steps)
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

float UCatenaryHelpers::FindParameterNewton(float TargetRatio)
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

float UCatenaryHelpers::FindParameterApproximate(float TargetRatio)
{
	// Quick approximation for different ranges
	if (TargetRatio < 1.2f)
		return 2.0f * (TargetRatio - 1.0f);

	if (TargetRatio < 2.0f)
		return 1.0f + FMath::Sqrt(6.0f * (TargetRatio - 1.0f));

	return FMath::Loge(2.0f * TargetRatio);
}

float UCatenaryHelpers::FindParameterFixed(float TargetRatio)
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

			if (isinf(Ratio))
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
