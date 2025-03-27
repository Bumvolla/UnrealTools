#pragma once

#include "CoreMinimal.h"
#include "ChannelMixer.h"

/**
 * Handles the Slate UI for the Texture Mixer.
 */
class FChannelMixerUI
{
public:
    // Opens the texture mixer window. The Mixer pointer provides access to state.
    static void ShowTextureMixerWindow(FChannelMixer* Mixer);

private:
    static TSharedRef<SWindow> BuildMainWindow();
    static TSharedRef<SWidget> CreateMainLayout(FChannelMixer* Mixer);
    static TSharedRef<SWidget> CreateChannelWidget(const FString& ChannelName, TSharedPtr<SImage>& ChannelImage, UTexture2D** ChannelTexture, FChannelMixer* Mixer);
    static float FindDesiredSizeKeepRatio();
    static TSharedRef<SWidget> CreateNameConfigWidget(const FString& Name, const FString& ToolTip, const FString& HintText, FString& ChangedText, FChannelMixer* Mixer);
    
};
