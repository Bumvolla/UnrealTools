#pragma once


#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "ConstructionScriptTools_BPLibrary.generated.h"



UCLASS()
class UConstructionScriptToolsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Construction Script Tools")
	static void RerunConstructionScript(AActor* objectToConstruct);

	UFUNCTION(BlueprintCallable, Category = "Construction Script Tools")
	static void RerunAllClassActorsConstructionScript(const AActor* thisActor);

	UFUNCTION(BlueprintCallable, Category = "Construction Script Tools")
	static TArray<FTransform> GetTransformPointsAlongSpline(const USplineComponent* spline, float distBetweenObjects);
};