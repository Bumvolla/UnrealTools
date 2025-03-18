#include "ChannelMixerUI.h"
#include "ChannelMixer.h"
#include "ChannelMixerUtils.h"
#include "Widgets/SWindow.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/Application/SlateApplication.h"
#include "Misc/Paths.h"

void FChannelMixerUI::ShowTextureMixerWindow(FChannelMixer* Mixer)
{
    TSharedRef<SWindow> TextureMixerWindow = BuildMainWindow();
    TextureMixerWindow->SetContent(CreateMainLayout(Mixer));
    FSlateApplication::Get().AddWindow(TextureMixerWindow);
}

TSharedRef<SWindow> FChannelMixerUI::BuildMainWindow()
{
    return SNew(SWindow)
        .Title(FText::FromString("Texture Mixer"))
        .ClientSize(FVector2D(400, 600))
        .SupportsMinimize(true)
        .SupportsMaximize(false)
        .IsTopmostWindow(true);
}

TSharedRef<SWidget> FChannelMixerUI::CreateMainLayout(FChannelMixer* Mixer)
{
    return SNew(SVerticalBox)
        // Grid with channel widgets.
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SUniformGridPanel)
                .SlotPadding(FMargin(5))
                + SUniformGridPanel::Slot(0, 0)[CreateChannelWidget("Red", Mixer->RedChannelImage, &Mixer->RedTexture, Mixer)]
                + SUniformGridPanel::Slot(1, 0)[CreateChannelWidget("Green", Mixer->GreenChannelImage, &Mixer->GreenTexture, Mixer)]
                + SUniformGridPanel::Slot(2, 0)[CreateChannelWidget("Blue", Mixer->BlueChannelImage, &Mixer->BlueTexture, Mixer)]
                + SUniformGridPanel::Slot(3, 0)[CreateChannelWidget("Alpha", Mixer->AlphaChannelImage, &Mixer->AlphaTexture, Mixer)]
        ]
        // Preview image area.
        + SVerticalBox::Slot()
        .VAlign(VAlign_Center)
        .HAlign(HAlign_Center)
        .Padding(10)
        [
            SNew(SBox)
                .WidthOverride(200)
                .HeightOverride(200)
                [
                    SAssignNew(Mixer->PreviewImage, SImage)
                ]
        ]
        // Export button.
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SButton)
                .Text(FText::FromString("Export"))
                .OnClicked_Lambda([Mixer]() -> FReply
                    {
                        return FChannelMixerUtils::ExportTexture(Mixer);
                    })
        ];
}

TSharedRef<SWidget> FChannelMixerUI::CreateChannelWidget(const FString& ChannelName, TSharedPtr<SImage>& ChannelImage, UTexture2D** ChannelTexture, FChannelMixer* Mixer)
{
    // Create the image widget.
    ChannelImage = SNew(SImage);
    return SNew(SVerticalBox)
        // Label for the channel.
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(STextBlock).Text(FText::FromString(ChannelName + " Channel"))
        ]
        // Box to display the channel image.
        + SVerticalBox::Slot()
        .VAlign(VAlign_Center)
        .HAlign(HAlign_Center)
        .Padding(5)
        [
            SNew(SBox)
                .WidthOverride(100)
                .HeightOverride(100)
                [
                    ChannelImage.ToSharedRef()
                ]
        ]
        // Import button that calls the utility function.
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SButton)
                .Text(FText::FromString("Import"))
                .OnClicked_Lambda([ChannelName, &ChannelImage, ChannelTexture, Mixer]() -> FReply
                    {
                        return FChannelMixerUtils::ImportTextureFromCB(Mixer, ChannelName, ChannelImage, ChannelTexture);
                    })
        ];
}
