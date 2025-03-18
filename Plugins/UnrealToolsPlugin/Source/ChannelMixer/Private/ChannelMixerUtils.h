#pragma once

#include "CoreMinimal.h"
#include "ChannelMixer.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Widgets/Images/SImage.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "Framework/Application/SlateApplication.h"
#include "Misc/Paths.h"
#include "Logging/LogMacros.h"
#include "LevelEditor.h"
#include "UnrealToolsPlugin/Public/DebugHeader.h"
/**
 * Utility functions for updating the preview texture, building package paths,
 * and handling import/export functionality.
 */
class FChannelMixerUtils
{
public:
    static void UpdatePreviewTexture(FChannelMixer* Mixer);
    static FString BuildPackagePath(FChannelMixer* Mixer);

    static FReply ExportTexture(FChannelMixer* Mixer);
    static FReply ImportTextureFromCB(FChannelMixer* Mixer, const FString& ChannelName, TSharedPtr<class SImage>& ChannelImage, UTexture2D** ChannelTexture);

};
