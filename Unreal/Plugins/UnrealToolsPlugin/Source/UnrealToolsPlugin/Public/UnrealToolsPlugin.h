// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUnrealToolsPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

DEFINE_LOG_CATEGORY_STATIC(FilesHandler, Log, All);

DEFINE_LOG_CATEGORY_STATIC(DisplayLibrary, Log, All);

DEFINE_LOG_CATEGORY_STATIC(ConstructionScriptTools, Log, All);

DEFINE_LOG_CATEGORY_STATIC(Mathfs, Log, All);