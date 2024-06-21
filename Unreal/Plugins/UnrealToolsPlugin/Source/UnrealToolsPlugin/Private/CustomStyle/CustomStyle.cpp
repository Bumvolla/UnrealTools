// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomStyle/CustomStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"

FName FUnrealToolsStyle::StyleSetName = FName("CustomStyle");
TSharedPtr<FSlateStyleSet> FUnrealToolsStyle::CreatedSlateStyleSet = nullptr;


void FUnrealToolsStyle::InitializeIcons()
{
	if (!CreatedSlateStyleSet.IsValid())
	{
		CreatedSlateStyleSet = CreateSlateStyleSet();
		FSlateStyleRegistry::RegisterSlateStyle(*CreatedSlateStyleSet);
	}
}


TSharedRef<FSlateStyleSet> FUnrealToolsStyle::CreateSlateStyleSet()
{
	TSharedRef<FSlateStyleSet> CustomStyleSet = MakeShareable(new FSlateStyleSet(StyleSetName));

	const FString IconDirectory = IPluginManager::Get().FindPlugin(TEXT("UnrealTools"))->GetBaseDir() / "Resources";
	CustomStyleSet->SetContentRoot(IconDirectory);

	const FVector2D Icon16x16(16.f, 16.f);
	const FString IconDir = IconDirectory + TEXT("/TextureToMask_16.png");
	CustomStyleSet->Set("ContentBrowser.MakeMask", new FSlateImageBrush( IconDir, Icon16x16));

	return TSharedRef<FSlateStyleSet>();
}

void FUnrealToolsStyle::ShutDown()
{
}