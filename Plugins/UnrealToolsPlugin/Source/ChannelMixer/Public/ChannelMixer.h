// Copyright (c) 2025 Sora Mas \n All rights reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FChannelMixer : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;

	void InitToolsMenuExtention();

	TArray<FAssetData> AssetsSelected;

	TSharedRef<FExtender> CustomToolsMenuExtender(const TArray<FAssetData>& SelectedAssets);

	void AddToolsMenuEntry(class FMenuBuilder& MenuBuilder);

	void MixTextures();
	
};
