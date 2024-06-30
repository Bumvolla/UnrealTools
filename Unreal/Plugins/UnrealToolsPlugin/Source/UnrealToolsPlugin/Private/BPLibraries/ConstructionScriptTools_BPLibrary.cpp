#include "BPLibraries/ConstructionScriptTools_BPLibrary.h"
#include "UnrealToolsPlugin.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"



UConstructionScriptToolsBPLibrary::UConstructionScriptToolsBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

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


