#pragma once


#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "ConstructionScriptTools_BPLibrary.generated.h"



UCLASS()
class UConstructionScriptToolsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
public:
	UFUNCTION(BlueprintCallable, Category = "Property Utils", meta = (DevelopmentOnly))
	static bool CopyInstancePropertiesToClassDefaults(UObject* SourceInstance);

private:
	static bool IsPropertySafeToWrite(FProperty* Property);

	UFUNCTION(BlueprintCallable, Category = "Construction Script Tools")
	static void RerunConstructionScript(AActor* objectToConstruct);

	UFUNCTION(BlueprintCallable, Category = "Construction Script Tools")
	static void RerunAllClassActorsConstructionScript(const AActor* thisActor);

	UFUNCTION(BlueprintCallable, Category = "Spline Construction Script Tools")
	static TArray<FTransform> GetTransformPointsAlongSpline(const USplineComponent* spline, float distBetweenObjects);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Construction Script Tools")
	static float GetMeshLenght(const UStaticMesh* Mesh, EAxis::Type Axis);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Spline Construction Script Tools")
	static int GetMeshesCountInSpline(const USplineComponent* Spline, const UStaticMesh* Mesh, EAxis::Type Axis);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Spline Construction Script Tools")
	static void GetSplineMeshStartAndEndByIteration(const int Index, const float Bound, const USplineComponent* Spline, FVector& StartPosition, FVector& StartTangent, FVector& EndPosition, FVector& EndTangent);

	UFUNCTION(BlueprintCallable, Category = "Box Construction Script Tools")
	static void GetRandomPointInBox(AActor* Actor, FVector BoxExtent, FVector& Point);

};