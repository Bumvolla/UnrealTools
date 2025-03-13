// Copyright (c) 2025 Sora Mas
// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Framework/MultiBox/MultiBoxExtender.h"
#include "CustomStyle.h"
#include "Interfaces/IPluginManager.h"

class FChannelMixer : public IModuleInterface
{
public:
    void StartupModule() override;
    void ShutdownModule() override;

private:
    void InitToolsMenuExtension();
    void AddToolsMenuEntry(FMenuBuilder& MenuBuilder);
    void OpenTextureMixerWindow();

    void UpdatePreviewTexture();


    const FString PluginContentDir = IPluginManager::Get().FindPlugin(TEXT("UnrealToolsPlugin"))->GetContentDir();
    TSharedRef<SWidget> CreateChannelWidget(const FString& ChannelName, TSharedPtr<SImage>& ChannelImage, UTexture2D** ChannelTexture);


    TSharedPtr<SImage> RedChannelImage;
    TSharedPtr<SImage> GreenChannelImage;
    TSharedPtr<SImage> BlueChannelImage;
    TSharedPtr<SImage> AlphaChannelImage;
    TSharedPtr<SImage> PreviewImage;
    UTextureRenderTarget2D* CombinedTexture = nullptr;
    UTexture2D* RedTexture = nullptr;
    UTexture2D* GreenTexture = nullptr;
    UTexture2D* BlueTexture = nullptr;
    UTexture2D* AlphaTexture = nullptr;
    TSharedPtr<FSlateBrush> PreviewBrush;

    TSharedPtr<FExtender> ToolbarExtender;
};