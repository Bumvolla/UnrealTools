// UnrealToolsPlugin.cpp
#include "UnrealToolsPlugin.h"
#include "ContentBrowserModule.h"
#include "DebugHeader.h"
#include "EditorAssetLibrary.h"
#include "ObjectTools.h"
#include <EditorUtilityLibrary.h>
#include "ActorFactories/ActorFactory.h"

#define LOCTEXT_NAMESPACE "FUnrealToolsPluginModule"

void FUnrealToolsPluginModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
    InitCBMenuExtention();
}

void FUnrealToolsPluginModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
}

void FUnrealToolsPluginModule::InitCBMenuExtention()
{
    FContentBrowserModule& ContentBrowserModule =
        FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));

    TArray<FContentBrowserMenuExtender_SelectedAssets>& ContentBrowserModuleMenuExtenders = ContentBrowserModule.GetAllAssetViewContextMenuExtenders();

    ContentBrowserModuleMenuExtenders.Add(FContentBrowserMenuExtender_SelectedAssets::CreateRaw(this, &FUnrealToolsPluginModule::CustomCBMenuExtender));
}

TSharedRef<FExtender> FUnrealToolsPluginModule::CustomCBMenuExtender(const TArray<FAssetData>& SelectedAssets)
{
    TSharedRef<FExtender> MenuExtender(new FExtender());

    if (SelectedAssets.Num() > 0)
    {
        MenuExtender->AddMenuExtension(FName("Texture_Texture2DArray"),
            EExtensionHook::After,
            TSharedPtr<FUICommandList>(),
            FMenuExtensionDelegate::CreateRaw(this, &FUnrealToolsPluginModule::AddCBMenuEntry));

        AssetsSelected = SelectedAssets;
    }

    return MenuExtender;
}

void FUnrealToolsPluginModule::AddCBMenuEntry(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry
    (
        FText::FromString(TEXT("Make selected textures a Mask")),
        FText::FromString(TEXT("Change texture compression settings to mask")),
        FSlateIcon(),
        FExecuteAction::CreateRaw(this, &FUnrealToolsPluginModule::MakeMaskTexture)
    );
}

void FUnrealToolsPluginModule::MakeMaskTexture()
{
    for (FAssetData asset : AssetsSelected)
    {
        if (UTexture* Texture = Cast<UTexture>(asset.GetAsset()))
        {
            Texture->CompressionSettings = TC_Masks;
            Texture->SRGB = 0;
            Texture->UpdateResource();
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT(" was not a texture"));
        }
    }
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FUnrealToolsPluginModule, UnrealToolsPlugin)
