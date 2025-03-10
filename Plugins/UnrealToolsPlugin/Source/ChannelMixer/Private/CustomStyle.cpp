#include "CustomStyle.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"

FName FChannelMixerStyle::StyleSetName = FName("UnrealToolsCustomStyle");
TSharedPtr<FSlateStyleSet> FChannelMixerStyle::CreatedSlateStyleSet = nullptr;

void FChannelMixerStyle::InitializeIcons()
{
	if (!CreatedSlateStyleSet.IsValid())
	{
		CreatedSlateStyleSet = CreateSlateStyleSet();
		FSlateStyleRegistry::RegisterSlateStyle(*CreatedSlateStyleSet);
	}
}


TSharedRef<FSlateStyleSet> FUnrealToFChannelMixerStyleolsStyle::CreateSlateStyleSet()
{
	TSharedRef<FSlateStyleSet> CustomStyleSet = MakeShareable(new FSlateStyleSet(StyleSetName));

	const FString IconDirectory = IPluginManager::Get().FindPlugin(TEXT("UnrealToolsPlugin"))->GetBaseDir() / "Resources";
	CustomStyleSet->SetContentRoot(IconDirectory);

	const FVector2D Icon16x16(16.f, 16.f);


	const FString IconDir = IconDirectory + TEXT("/TextureToMask_16.png");
	CustomStyleSet->Set("ContentBrowser.MakeMask", new FSlateImageBrush( IconDir, Icon16x16));

	return CustomStyleSet;
}

void FChannelMixerStyle::ShutDown()
{
	if (CreatedSlateStyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*CreatedSlateStyleSet);
		CreatedSlateStyleSet.Reset();
	}
}
