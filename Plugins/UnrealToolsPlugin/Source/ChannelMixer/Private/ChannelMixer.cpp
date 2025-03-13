#include "ChannelMixer.h"
#include "LevelEditor.h"
#include "Widgets/SWindow.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "EditorAssetLibrary.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "Framework/Application/SlateApplication.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"

#define LOCTEXT_NAMESPACE "FChannelMixer"

void FChannelMixer::StartupModule()
{
    // Initialize the menu extension
    InitToolsMenuExtension();
}

void FChannelMixer::ShutdownModule()
{
    // Clean up the menu extender
    if (ToolbarExtender.IsValid())
    {
        FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
        LevelEditorModule.GetMenuExtensibilityManager()->RemoveExtender(ToolbarExtender);
    }

}

void FChannelMixer::InitToolsMenuExtension()
{
    // Create the extender
    ToolbarExtender = MakeShareable(new FExtender);

    // Add the menu entry
    ToolbarExtender->AddMenuExtension(
        "Tools",
        EExtensionHook::After,
        nullptr,
        FMenuExtensionDelegate::CreateRaw(this, &FChannelMixer::AddToolsMenuEntry)
    );

    // Register the extender with the Level Editor module
    FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(ToolbarExtender);
}

void FChannelMixer::AddToolsMenuEntry(FMenuBuilder& MenuBuilder)
{
    // Add a new menu item to the Tools dropdown
    MenuBuilder.AddMenuEntry(
        FText::FromString(TEXT("Open Tex Mixer")),
        FText::FromString(TEXT("Open the texture mixer window")),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FChannelMixer::OpenTextureMixerWindow))
    );
}

void FChannelMixer::OpenTextureMixerWindow()
{
    TSharedRef<SWindow> TextureMixerWindow = SNew(SWindow)
        .Title(FText::FromString("Texture Mixer"))
        .ClientSize(FVector2D(600, 400))
        .SupportsMinimize(true)
        .SupportsMaximize(false)
        .IsTopmostWindow(true);

    TSharedRef<SVerticalBox> MainLayout = SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SUniformGridPanel)
                .SlotPadding(FMargin(5))
                + SUniformGridPanel::Slot(0, 0)[CreateChannelWidget("Red", RedChannelImage, &RedTexture)]
                + SUniformGridPanel::Slot(1, 0)[CreateChannelWidget("Green", GreenChannelImage, &GreenTexture)]
                + SUniformGridPanel::Slot(2, 0)[CreateChannelWidget("Blue", BlueChannelImage, &BlueTexture)]
                + SUniformGridPanel::Slot(3, 0)[CreateChannelWidget("Alpha", AlphaChannelImage, &AlphaTexture)]
        ]
        + SVerticalBox::Slot()
        .VAlign(VAlign_Center)
        .HAlign(HAlign_Center)
        .Padding(10)
        [
            SNew(SBox)
                .WidthOverride(200)
                .HeightOverride(200)
                [
                    SAssignNew(PreviewImage, SImage)
                ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SButton)
                .Text(FText::FromString("Export"))
                .OnClicked_Lambda([this]() -> FReply
                    {

                        // Export the texture to the content folder
                        FString PackageName = "/Game/GeneratedTextures/ExportedTexture";
                        FString AssetName = "ExportedTexture";
                        UTexture2D* ExportedTexture = UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(CombinedTexture, PackageName, TextureCompressionSettings::TC_Masks, TextureMipGenSettings::TMGS_NoMipmaps);
                        if (ExportedTexture)
                        {
                            UE_LOG(LogTemp, Warning, TEXT("Successfully exported combined texture to content browser."));
                        }
                        else
                        {
                            UE_LOG(LogTemp, Error, TEXT("Failed to export combined texture!"));
                        }
                        return FReply::Handled();
                    })
        ];

    TextureMixerWindow->SetContent(MainLayout);
    FSlateApplication::Get().AddWindow(TextureMixerWindow);
}

void FChannelMixer::UpdatePreviewTexture()
{
    UWorld* World = GEditor->GetEditorWorldContext().World();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("UpdatePreviewTexture: Invalid World Context!"));
        return;
    }

    if (!CombinedTexture || !CombinedTexture->IsValidLowLevel())
    {
        UE_LOG(LogTemp, Error, TEXT("CombinedTexture is null or invalid, recreating..."));
        CombinedTexture = UKismetRenderingLibrary::CreateRenderTarget2D(World, 512, 512, RTF_RGBA8);
        CombinedTexture->AddToRoot(); // Prevent garbage collection
    }

    if (!RedTexture || !GreenTexture || !BlueTexture || !AlphaTexture)
    {
        UE_LOG(LogTemp, Warning, TEXT("One or more textures are null, skipping update."));
        return;
    }

    UMaterialInterface* BaseMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/UnrealToolsPlugin/MM/MM_TextureMixer"));
    if (!BaseMaterial)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load material: /UnrealToolsPlugin/MM/MM_TextureMixer"));
        return;
    }

    UMaterialInstanceDynamic* BlendMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(World, BaseMaterial);
    if (!BlendMaterial)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create dynamic material instance!"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Applying textures to material..."));
    BlendMaterial->SetTextureParameterValue(FName("RedTexture"), RedTexture);
    BlendMaterial->SetTextureParameterValue(FName("GreenTexture"), GreenTexture);
    BlendMaterial->SetTextureParameterValue(FName("BlueTexture"), BlueTexture);
    BlendMaterial->SetTextureParameterValue(FName("AlphaTexture"), AlphaTexture);

    UKismetRenderingLibrary::DrawMaterialToRenderTarget(World, CombinedTexture, BlendMaterial);
    FSlateApplication::Get().Tick();
    UE_LOG(LogTemp, Warning, TEXT("Updated render target with blended texture"));

    if (!PreviewBrush.IsValid())
    {
        PreviewBrush = MakeShared<FSlateBrush>();
    }

    PreviewBrush->SetResourceObject(CombinedTexture);
    if (PreviewImage.IsValid())
    {
        PreviewImage->SetImage(PreviewBrush.Get());
        UE_LOG(LogTemp, Warning, TEXT("Updated preview image successfully."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PreviewBrush or PreviewImage is invalid!"));
    }

}


TSharedRef<SWidget> FChannelMixer::CreateChannelWidget(const FString& ChannelName, TSharedPtr<SImage>& ChannelImage, UTexture2D** ChannelTexture)
{
    ChannelImage = SNew(SImage);
    return SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(STextBlock).Text(FText::FromString(ChannelName + " Channel"))
        ]
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
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SButton)
                .Text(FText::FromString("Import"))
                .OnClicked_Lambda([this, ChannelName, ChannelImage, ChannelTexture]() -> FReply
                    {
                        FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
                        TArray<FAssetData> SelectedAssets;
                        ContentBrowserModule.Get().GetSelectedAssets(SelectedAssets);

                        if (SelectedAssets.Num() == 1)
                        {
                            UObject* SelectedObject = SelectedAssets[0].GetAsset();
                            if (UTexture2D* SelectedTexture = Cast<UTexture2D>(SelectedObject))
                            {
                                FSlateBrush* NewBrush = new FSlateBrush();
                                NewBrush->SetResourceObject(SelectedTexture);
                                ChannelImage->SetImage(NewBrush);
                                *ChannelTexture = SelectedTexture;
                                UE_LOG(LogTemp, Log, TEXT("Imported texture for %s channel: %s"), *ChannelName, *SelectedTexture->GetName());

                                UpdatePreviewTexture();
                            }
                        }
                        else
                        {
                            UE_LOG(LogTemp, Warning, TEXT("Please select a single texture in the Content Browser."));
                        }

                        return FReply::Handled();
                    })
                ];
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FChannelMixer, ChannelMixer);