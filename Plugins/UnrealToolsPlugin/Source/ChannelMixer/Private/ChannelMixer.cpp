// Copyright (c) 2025 Sora Mas \n All rights reserved. 

#include "ChannelMixer.h"
#include "Logging.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FChannelMixer"

void FChannelMixer::StartupModule()
{
}

void FChannelMixer::ShutdownModule()
{
	
}

void FChannelMixer::InitToolsMenuExtention()
{
}

TSharedRef<FExtender> FChannelMixer::CustomToolsMenuExtender(const TArray<FAssetData>& SelectedAssets)
{
	return TSharedRef<FExtender>();
}

void FChannelMixer::AddToolsMenuEntry(FMenuBuilder& MenuBuilder)
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChannelMixer, ChannelMixer);