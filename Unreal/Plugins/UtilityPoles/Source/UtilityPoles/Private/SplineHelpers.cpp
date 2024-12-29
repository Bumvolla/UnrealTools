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
