// Copyright (c) 2025 Sora Mas \n All rights reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnchancedNotifications.generated.h"

/**
 * 
 */
UCLASS()
class ENCHANCEDEDITORLOGGING_API UEnchancedNotifications : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	static void OpenCBDirNotification(const FString& Title, const FString& Dir);
};
