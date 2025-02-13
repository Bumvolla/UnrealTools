#include "BPLibraries/ConstructionScriptTools_BPLibrary.h"
#include "UnrealToolsPlugin.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Math/Axis.h"



UConstructionScriptToolsBPLibrary::UConstructionScriptToolsBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

bool UConstructionScriptToolsBPLibrary::CopyInstancePropertiesToClassDefaults(UObject* SourceInstance)
{
	if (!SourceInstance || !GIsEditor)
	{
		return false;
	}

	// Get the class and its CDO
	UClass* Class = SourceInstance->GetClass();
	UObject* CDO = Class->GetDefaultObject();

	if (!CDO || SourceInstance->HasAnyFlags(RF_ClassDefaultObject))
	{
		return false;
	}

	// Start a transaction for undo support
	const FScopedTransaction Transaction(FText::FromString(FString::Printf(TEXT("Copy Instance Properties to %s Defaults"), *Class->GetName())));
	CDO->Modify();

	// Iterate through all properties of the class
	for (TFieldIterator<FProperty> PropIt(Class); PropIt; ++PropIt)
	{
		FProperty* Property = *PropIt;

		if (!IsPropertySafeToWrite(Property))
		{
			continue;
		}

		// Copy the property value from instance to CDO
		void* SourceAddr = Property->ContainerPtrToValuePtr<void>(SourceInstance);
		void* DestAddr = Property->ContainerPtrToValuePtr<void>(CDO);
		Property->CopyCompleteValue(DestAddr, SourceAddr);
	}

	// Notify the editor that we've modified the CDO
	CDO->PostEditChange();
	return true;
}

bool UConstructionScriptToolsBPLibrary::IsPropertySafeToWrite(FProperty* Property)
{
	{
		if (!Property)
			return false;

		// Skip properties that shouldn't be modified
		if (Property->HasAnyPropertyFlags(CPF_Transient | CPF_DuplicateTransient | CPF_NonPIEDuplicateTransient))
			return false;

		// Skip references and pointers
		if (Property->IsA<FObjectProperty>() || Property->IsA<FDelegateProperty>() ||
			Property->IsA<FMulticastDelegateProperty>())
			return false;

		return true;
	}
}

void UConstructionScriptToolsBPLibrary::RerunConstructionScript(AActor* objectToConstruct)
{

	bool bisRunningConstruction = objectToConstruct->IsRunningUserConstructionScript();

	if (!bisRunningConstruction)
	{
		objectToConstruct->RerunConstructionScripts();
	}

}

void UConstructionScriptToolsBPLibrary::RerunAllClassActorsConstructionScript(const AActor* thisActor)
{
	TArray<AActor*> ActorsToFind;

	UGameplayStatics::GetAllActorsOfClass(thisActor->GetWorld(), thisActor->GetClass(), ActorsToFind);

	for (AActor* actor : ActorsToFind) 
	{
		RerunConstructionScript(actor);
	}
}

TArray<FTransform> UConstructionScriptToolsBPLibrary::GetTransformPointsAlongSpline(const USplineComponent* spline, const float distBetweenObjects)
{

	float splineLenght = spline->GetSplineLength();
	int instancesToSpawn = trunc(splineLenght / distBetweenObjects);

	TArray<FTransform> SpawnPointsTransform;

	for (int i = 0; i < instancesToSpawn; i++)
	{
		SpawnPointsTransform.Add(spline->GetTransformAtDistanceAlongSpline(splineLenght / instancesToSpawn * i, ESplineCoordinateSpace::Local, false));
	}

	return SpawnPointsTransform;
}

float UConstructionScriptToolsBPLibrary::GetMeshLenght(const UStaticMesh* Mesh, EAxis::Type Axis)
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
		UE_LOG(ConstructionScriptTools, Warning, TEXT("No axis selected, defaulting to X"))
		return FMath::Abs(MinBoundingBox.X) + FMath::Abs(MaxBoundingBox.X);
		break;
	}

}

int UConstructionScriptToolsBPLibrary::GetMeshesCountInSpline(const USplineComponent* Spline, const UStaticMesh* Mesh, EAxis::Type Axis)
{
	return FMath::TruncToInt(Spline->GetSplineLength() / GetMeshLenght(Mesh, Axis)*2);
}

void UConstructionScriptToolsBPLibrary::GetSplineMeshStartAndEndByIteration(const int Index, const float Bound,const USplineComponent* Spline, FVector& StartPosition, FVector& StartTangent, FVector& EndPosition, FVector& EndTangent)
{
	float StartDistance = Index * Bound;
	float EndDistance = (Index + 1) * Bound;

	StartPosition = Spline->GetLocationAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local);
	StartTangent = Spline->GetTangentAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local).GetClampedToSize(0, Bound);
	EndPosition = Spline->GetLocationAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local);
	EndTangent = Spline->GetTangentAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local).GetClampedToSize(0, Bound);
}

void UConstructionScriptToolsBPLibrary::GetRandomPointInBox(AActor* Actor, FVector BoxExtent, FVector& Point)
{
	FTransform ActorTransform = Actor->GetTransform();

	// Generate random point in local space
	FVector RandomLocalPoint = FVector(
		FMath::RandRange(-BoxExtent.X, BoxExtent.X),
		FMath::RandRange(-BoxExtent.Y, BoxExtent.Y),
		FMath::RandRange(-BoxExtent.Z, BoxExtent.Z)
	);

	// Transform random point to world space
	Point = ActorTransform.TransformPosition(RandomLocalPoint);

}




