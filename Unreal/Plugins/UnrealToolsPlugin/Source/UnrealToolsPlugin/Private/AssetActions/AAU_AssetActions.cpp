// Fill out your copyright notice in the Description page of Project Settings.

#include "AssetActions/AAU_AssetActions.h"
#include "DebugHeader.h"

#include "EditorUtilityLibrary.h"
#include "EditorAssetLibrary.h"

#include "ObjectTools.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"

#include "PluginConfig.h"

void UAAU_AssetActions::ExecuteSaveThumbnailAsTexture()
{
	// This function was created using code from NanceDevDiaries: 
	// https://github.com/NanceDevDiaries/Tutorials/blob/main/ThumbnailToTextureToolTutorial/LyraEditor.cpp

	int32 iterations = 0;
	TArray<FAssetData> SelectedAssets = UEditorUtilityLibrary::GetSelectedAssetData();

	for (const FAssetData& Asset : SelectedAssets)
	{
		int32 pathSeparatorIdx;
		FAssetData obj = Asset;
		FString GamePath = obj.GetAsset()->GetPathName();
		FString AssetName;
		int32 pathEnd;
		if (GamePath.FindLastChar('/', pathEnd)) {
			++pathEnd;
			AssetName = GamePath.RightChop(pathEnd);
			int32 extensionIdx;
			if (AssetName.FindChar('.', extensionIdx))
			{
				AssetName.LeftInline(extensionIdx);
			}
			GamePath.LeftInline(pathEnd);
			FString Prefix = "T_";
			FString Suffix = "_UI";
			FString NameWithSuffix = Prefix + AssetName + Suffix;
			AssetName = NameWithSuffix;
		}
		else
		{
			AssetName = "T_Thumbnail";
		}

		if (AssetName.FindChar('/', pathSeparatorIdx)) {
			UE_LOG(LogTemp, Error, TEXT("Asset name contained '/' "))
				return;
		}

		FObjectThumbnail* thumb = ThumbnailTools::GenerateThumbnailForObjectToSaveToDisk(obj.GetAsset());
		if (!thumb) {
			UE_LOG(LogTemp, Error, TEXT("Object has no thumbnail"))
				return;
		}

		const UPluginConfig* Settings = GetDefault<UPluginConfig>();
		FString settingsStoredPath = Settings->SavePath;

		FString PackageName = settingsStoredPath;
		if (!PackageName.EndsWith("/")) {
			PackageName += "/";
		}
		PackageName += AssetName;

		UE_LOG(LogTemp, Log, TEXT("PackageName: %s"), *PackageName);

		UPackage* Package = CreatePackage(*PackageName);
		Package->FullyLoad();

		UTexture2D* NewTexture = NewObject<UTexture2D>(Package, *AssetName, RF_Public | RF_Standalone | RF_MarkAsRootSet);
		NewTexture->AddToRoot();
		FTexturePlatformData* platformData = new FTexturePlatformData();
		platformData->SizeX = thumb->GetImageWidth();
		platformData->SizeY = thumb->GetImageHeight();
		platformData->PixelFormat = EPixelFormat::PF_B8G8R8A8;
		NewTexture->SetPlatformData(platformData);

		FTexture2DMipMap* Mip = new FTexture2DMipMap();
		platformData->Mips.Add(Mip);
		Mip->SizeX = thumb->GetImageWidth();
		Mip->SizeY = thumb->GetImageHeight();

		Mip->BulkData.Lock(LOCK_READ_WRITE);
		uint8* TextureData = (uint8*)Mip->BulkData.Realloc(thumb->GetUncompressedImageData().Num() * 4);
		FMemory::Memcpy(TextureData, thumb->GetUncompressedImageData().GetData(), thumb->GetUncompressedImageData().Num());
		Mip->BulkData.Unlock();

		NewTexture->Source.Init(thumb->GetImageWidth(), thumb->GetImageHeight(), 1, 1, ETextureSourceFormat::TSF_BGRA8, thumb->GetUncompressedImageData().GetData());
		NewTexture->LODGroup = TEXTUREGROUP_UI;
		NewTexture->UpdateResource();
		Package->MarkPackageDirty();
		Package->FullyLoad();
		FAssetRegistryModule::AssetCreated(NewTexture);

		FSavePackageArgs SaveArgs;
		SaveArgs.TopLevelFlags = EObjectFlags::RF_Public | EObjectFlags::RF_Standalone;
		SaveArgs.SaveFlags = SAVE_NoError;
		SaveArgs.bForceByteSwapping = true;
		FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
		UPackage::SavePackage(Package, NewTexture, *PackageFileName, SaveArgs);

		iterations++;
	}
	if (iterations > 0)
	{
		FString NotificationText = FString::Printf(TEXT("Successfully created thumbnail textures for %d objects"), iterations);
		PrintToNotification(NotificationText);
		UE_LOG(LogTemp, Log, TEXT("Thumbnails created successfully"))
	}
}


void UAAU_AssetActions::BatchDuplicate(uint32 numOfDuplicates)
{

	if (numOfDuplicates <= 0)
	{
		PrintToEditorWindow(EAppMsgType::Ok, TEXT("Please enter a valid number"), TEXT("Warning"));
		return;
	}

	TArray<FAssetData> SelectedAssets = UEditorUtilityLibrary::GetSelectedAssetData();
	uint32 counter = 0;

	for(const FAssetData& SelectedAssetData:SelectedAssets)
		for (uint32 i = 0; i < numOfDuplicates; i++) 
		{
			const FString SourceAssetPath = SelectedAssetData.GetSoftObjectPath().ToString();
			const FString NewDuplicatedAssetName = SelectedAssetData.AssetName.ToString() + TEXT("_") + FString::FromInt(i + 1);
			const FString NewPathName = FPaths::Combine(SelectedAssetData.PackagePath.ToString(), NewDuplicatedAssetName);

			if (UEditorAssetLibrary::DuplicateAsset(SourceAssetPath, NewPathName))
			{
				UEditorAssetLibrary::SaveAsset(NewPathName, false);
				++counter;
			}
		}

	if(counter > 0)
		PrintToNotification(TEXT("Successfully duplicated " + FString::FromInt(counter) + " assets "));

}

void UAAU_AssetActions::AddPrefixesAndSufixes()
{

	int iterations = 0;
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();


	for (UObject* SelectedObject:SelectedObjects) 
	{
		FString* prefixFound = PrefixesMap.Find(SelectedObject->GetClass());
		FString objectOldName = SelectedObject->GetName();

		if (!SelectedObject)
		{
			continue;
		}
		else if (!prefixFound || prefixFound->IsEmpty())
		{
			PrintLog(TEXT("Couldn't find prefix for object ") + SelectedObject->GetName() + (" of class ") + SelectedObject->GetClass()->GetName());
			continue;
		}
		else if (SelectedObject->GetName().StartsWith(*prefixFound)) 
		{
			PrintLog(TEXT("Object "  + SelectedObject->GetName() +  " already has prefix."));
			continue;
		}

		if (SelectedObject->IsA<UMaterialInstanceConstant>())
		{
			MaterialInstanceExceptions(SelectedObject, objectOldName);
		}

		FString objectNewName = *prefixFound + objectOldName;
		UEditorUtilityLibrary::RenameAsset(SelectedObject, objectNewName);

		iterations++;
	}
	if (iterations > 0)
		PrintToNotification(TEXT("Successfully modificated " + FString::FromInt(iterations) + " names"));

	
}

void UAAU_AssetActions::RemoveSelectedUnusetAssets()
{
	TArray<FAssetData> SelectedAssets = UEditorUtilityLibrary::GetSelectedAssetData();
	TArray<FAssetData> UnusedObjectsAssetData;

	FixupRedirectors();

	for (FAssetData& AssetData : SelectedAssets)
	{
		const FString& AssetPath = AssetData.GetSoftObjectPath().ToString();
		TArray<FString> AssetObjectsReference = UEditorAssetLibrary::FindPackageReferencersForAsset(AssetPath, true);

		if (AssetObjectsReference.Num() == 0)
		{
			UnusedObjectsAssetData.Add(AssetData);
		}
	}

	if (UnusedObjectsAssetData.Num() == 0)
	{
		PrintToNotification(TEXT("There were no unused objects among selected objects"));
		return;
	}

	int32 numOfAssetsDeleted = ObjectTools::DeleteAssets(UnusedObjectsAssetData);

	if (numOfAssetsDeleted == 0) return;
	
	PrintToNotification(TEXT("Succesfully deleted " + FString::FromInt(numOfAssetsDeleted) + " unused objects"));
}

void UAAU_AssetActions::FixupRedirectors()
{

	TArray<UObjectRedirector*> RedirectorsToFix;

	FAssetRegistryModule& AssetRegistryModule =
		FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	FARFilter Filter;
	Filter.bRecursivePaths = true;
	Filter.PackageNames.Emplace("/Game");
	Filter.ClassPaths.Emplace("ObjectRedirector");

	TArray<FAssetData> OutRedirectors;

	AssetRegistryModule.Get().GetAssets(Filter, OutRedirectors);

	for (FAssetData Redirector : OutRedirectors) 
	{
		if (UObjectRedirector* RedirectorToFix = Cast<UObjectRedirector>(Redirector.GetAsset())) 
		{
			RedirectorsToFix.Add(RedirectorToFix);
		}
	}

	FAssetToolsModule& AssetToolsModule = 
	FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));

	AssetToolsModule.Get().FixupReferencers(RedirectorsToFix);


}

void UAAU_AssetActions::AssetBatchRenaming(FString nameToSet, TArray<FString> suffix)
{

	int iterations = 0;

	TArray<UObject*> SelectedObjects =
		UEditorUtilityLibrary::GetSelectedAssets();

	for (UObject* selectedObject : SelectedObjects) 
	{
		FString newObjectName = *nameToSet + suffix[iterations];
		UEditorUtilityLibrary::RenameAsset(selectedObject, newObjectName);

		iterations++;
	}

	if (iterations > 0)
		PrintToNotification(TEXT("Successfully modificated " + FString::FromInt(iterations) + " names"));

}


	
