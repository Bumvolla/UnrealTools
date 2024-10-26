#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Mathfs_BPLibrary.generated.h"

UCLASS()
class UMathfsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	//Hiperbolic sine
	UFUNCTION(BlueprintPure, Category = "Math", meta = (CompactNodeTitle = "Sinh"))
	static float Sinh(const float x);

	UFUNCTION(BlueprintPure, Category = "Math", meta = (CompactNodeTitle = "Cosh"))
	static float Cosh(const float x);

	UFUNCTION(BlueprintPure, Category = "Math", meta = (CompactNodeTitle = "Asinh"))
	static float Asinh(const float x);

	UFUNCTION(BlueprintPure, Category = "Math")
	static void LocalToWorldSpace(FVector LocalPoint, AActor* ReferenceActor, FVector& ReturnValue);

	UFUNCTION(BlueprintPure, Category = "Math")
	static void WorldToLocalSpace(FVector WorldPoint, AActor* ReferenceActor, FVector& ReturnValue);


};
