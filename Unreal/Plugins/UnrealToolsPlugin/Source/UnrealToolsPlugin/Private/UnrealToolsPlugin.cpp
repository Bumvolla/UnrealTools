// UnrealToolsPlugin.cpp
#include "UnrealToolsPlugin.h"
#include "ContentBrowserModule.h"
#include "DebugHeader.h"
#include "EditorAssetLibrary.h"
#include "ObjectTools.h"
#include <EditorUtilityLibrary.h>
#include "ActorFactories/ActorFactory.h"
#include "CustomStyle/CustomStyle.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "PluginConfig.h"

#define LOCTEXT_NAMESPACE "FUnrealToolsPluginModule"

void FUnrealToolsPluginModule::StartupModule()
{
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        SettingsModule->RegisterSettings("Project", "Plugins", "Unreal Tools",
            LOCTEXT("Unreal tools plugin configuration", "Unreal Tools"),
            LOCTEXT("MyPluginSettingsDescription", "Unreal tools misc configurations"),
            GetMutableDefault<UPluginConfig>()
        );
    }
    
    InitCBMenuExtention();

    FUnrealToolsStyle::InitializeIcons();
}

void FUnrealToolsPluginModule::ShutdownModule()
{
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        SettingsModule->UnregisterSettings("Project", "Plugins", "MyPlugin");
    }

    FUnrealToolsStyle::ShutDown();
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
        FText::FromString(TEXT("Make Mask")),
        FText::FromString(TEXT("Change texture compression settings to mask")),
        FSlateIcon(FUnrealToolsStyle::GetStyleSetName(), "ContentBrowser.MakeMask"),
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
            FString AssetName = asset.AssetName.ToString();
            PrintLog(AssetName + TEXT(" was not a texture"));
        }
    }
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FUnrealToolsPluginModule, UnrealToolsPlugin)
