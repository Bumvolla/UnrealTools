#pragma once


#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConstructionScriptTools_BPLibrary.generated.h"


UCLASS()
class UConstructionScriptToolsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Constructiuon Script Tools")
	static void RerunConstructionScript(AActor* objectToConstruct);

	UFUNCTION(BlueprintCallable, Category = "Constructiuon Script Tools")
	static void RerunAllClassActorsConstructionScript(const AActor* thisActor);


};