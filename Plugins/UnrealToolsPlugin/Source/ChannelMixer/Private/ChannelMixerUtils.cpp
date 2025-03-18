#include "ChannelMixerUtils.h"
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


FReply FChannelMixerUtils::ExportTexture(FChannelMixer* Mixer)
{
    if (!Mixer || !Mixer->CombinedTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("ExportTexture: CombinedTexture is null"));
        return FReply::Handled();
    }

    FString PackageName = BuildPackagePath(Mixer);

    UTexture2D* ExportedTexture = UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(
        Mixer->CombinedTexture,
        PackageName,
        TextureCompressionSettings::TC_Masks,
        TextureMipGenSettings::TMGS_NoMipmaps
    );
    if (ExportedTexture)
    {
        PrintToNotification(FString::Printf(TEXT("Successfully exported combined texture to %s"), *Mixer->GetExportPath()));
    }
    return FReply::Handled();
}

FReply FChannelMixerUtils::ImportTextureFromCB(FChannelMixer* Mixer, const FString& ChannelName, TSharedPtr<SImage>& ChannelImage, UTexture2D** ChannelTexture)
{

    FContentBrowserModule* ContentBrowserModule = &FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
    TArray<FAssetData> SelectedAssets;
    ContentBrowserModule->Get().GetSelectedAssets(SelectedAssets);

    if (SelectedAssets.Num() == 1)
    {
        UObject* SelectedObject = SelectedAssets[0].GetAsset();
        if (UTexture2D* SelectedTexture = Cast<UTexture2D>(SelectedObject))
        {
            FSlateBrush* NewBrush = new FSlateBrush();
            NewBrush->SetResourceObject(SelectedTexture);
            ChannelImage->SetImage(NewBrush);
            *ChannelTexture = SelectedTexture;
            if(Mixer->BlendMaterial)
                Mixer->BlendMaterial->SetTextureParameterValue(FName(ChannelName), *ChannelTexture);

            UpdatePreviewTexture(Mixer);
        }
        else
        {
            PrintToNotification(TEXT("Please select a texture to import"));
        }
    }
    else
    {
        PrintToNotification(TEXT("Please select a texture to import"));
    }
    return FReply::Handled();
}

void FChannelMixerUtils::UpdatePreviewTexture(FChannelMixer* Mixer)
{
    if (!Mixer) return;

    UWorld* World = GEditor->GetEditorWorldContext().World();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("UpdatePreviewTexture: Invalid World Context!"));
        return;
    }

    if (!Mixer->CombinedTexture || !Mixer->CombinedTexture->IsValidLowLevel())
    {
        UE_LOG(LogTemp, Error, TEXT("CombinedTexture is null or invalid, recreating..."));
        Mixer->CombinedTexture = UKismetRenderingLibrary::CreateRenderTarget2D(World, 512, 512, RTF_RGBA8);
        Mixer->CombinedTexture->AddToRoot();
    }

    UKismetRenderingLibrary::ClearRenderTarget2D(World, Mixer->CombinedTexture, FLinearColor(0, 0, 0, 1.0f));
    UMaterialInstanceDynamic* BlendMaterial= Mixer->BlendMaterial;

    UKismetRenderingLibrary::DrawMaterialToRenderTarget(World, Mixer->CombinedTexture, BlendMaterial);
    FSlateApplication::Get().Tick();

    if (!Mixer->PreviewBrush.IsValid())
    {
        Mixer->PreviewBrush = MakeShared<FSlateBrush>();
    }

    Mixer->PreviewBrush->SetResourceObject(Mixer->CombinedTexture);
    if (Mixer->PreviewImage.IsValid())
    {
        Mixer->PreviewImage->SetImage(Mixer->PreviewBrush.Get());
        UE_LOG(LogTemp, Warning, TEXT("Updated preview image successfully."));
    }
}

FString FChannelMixerUtils::BuildPackagePath(FChannelMixer* Mixer)
{
    if (!Mixer) return FString();

    FString tempPrefix = Mixer->GetTexturePrefix().IsEmpty() ? TEXT("") : FString::Printf(TEXT("%s_"), *Mixer->GetTexturePrefix());
    FString tempSuffix = Mixer->GetTextureSuffix().IsEmpty() ? TEXT("") : FString::Printf(TEXT("_%s"), *Mixer->GetTextureSuffix());
    FString AssetName = FString::Printf(TEXT("%s%s%s"), *tempPrefix, *Mixer->GetTextureName(), *tempSuffix);
    FString PackageName = FString::Printf(TEXT("/Game/%s/%s"), *Mixer->GetExportPath(), *AssetName);
    return PackageName;
}
