#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "DisplayLibrary_BPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FDisplayInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Displays")
	FString Name;

	UPROPERTY(BlueprintReadOnly, Category = "Displays")
	FString ID;

	UPROPERTY(BlueprintReadOnly, Category = "Displays")
	int32 NativeWidth = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Displays")
	int32 NativeHeight = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Displays")
	FIntPoint MaxResolution = FIntPoint(ForceInitToZero);

	UPROPERTY(BlueprintReadOnly, Category = "Displays")
	bool bIsPrimary = false;

	UPROPERTY(BlueprintReadOnly, Category = "Displays")
	int32 DPI = 0;

	//default constructor
	FDisplayInfo()
	{
		Name = FString("");
		ID = FString("");
		NativeWidth = 0;
		NativeHeight = 0;
		MaxResolution = FIntPoint(ForceInitToZero);
		bIsPrimary = true;
		DPI = 0;
	}

	//custom constuctor
	FDisplayInfo(const FString& InName, const FString& InID, int32 InNativeWidth, int32 InNativeHeight,
		const FIntPoint& InMaxResolution, bool bInIsPrimary, int32 InDPI)
		: Name(InName),
		ID(InID),
		NativeWidth(InNativeWidth),
		NativeHeight(InNativeHeight),
		MaxResolution(InMaxResolution),
		bIsPrimary(bInIsPrimary),
		DPI(InDPI)
	{
	}
};

UCLASS()
class UDisplayLibrary_BPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "Display Library")
	static int GetDisplayCount();

	UFUNCTION(BlueprintCallable, Category = "Display Library")
	static TArray<FDisplayInfo> GetAllDisplays();

	UFUNCTION(BlueprintCallable, Category = "Display Library")
	static bool SetActiveDisplay(int32 DisplayIndex);

};
