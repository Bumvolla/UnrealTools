// UnrealToolsPlugin.h
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUnrealToolsPluginModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:

#pragma region ContentBrowserMenuExtention

    void InitCBMenuExtention();

    TArray<FAssetData> AssetsSelected;

    TSharedRef<FExtender> CustomCBMenuExtender(const TArray<FAssetData>& SelectedAssets);

    void AddCBMenuEntry(class FMenuBuilder& MenuBuilder);

    void MakeMaskTexture();

#pragma endregion
};

DEFINE_LOG_CATEGORY_STATIC(FilesHandler, Log, All);
DEFINE_LOG_CATEGORY_STATIC(DisplayLibrary, Log, All);
DEFINE_LOG_CATEGORY_STATIC(ConstructionScriptTools, Log, All);
DEFINE_LOG_CATEGORY_STATIC(Mathfs, Log, All);
DEFINE_LOG_CATEGORY_STATIC(Catenary3D, Log, All);
