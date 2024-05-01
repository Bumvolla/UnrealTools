// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AssetRegistry/AssetRegistryModule.h"
#include <ObjectTools.h>
#include "UObject/SavePackage.h"
#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "Engine/Texture.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Particles/ParticleSystem.h"	
#include "Sound/SoundCue.h"
#include "Sound/SoundWave.h"
#include "Engine/Texture.h"
#include "Blueprint/UserWidget.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraEmitter.h"
#include "Misc/CString.h"


#include "AAU_AssetActions.generated.h"



UCLASS()
class UNREALTOOLSPLUGIN_API UAAU_AssetActions : public UAssetActionUtility
{
	GENERATED_BODY()

public:

	UFUNCTION(CallInEditor)
	void ExecuteSaveThumbnailAsTexture();
	
	UFUNCTION(CallInEditor)
	void BatchDuplicate(uint32 numOfDuplicates);

	UFUNCTION(CallInEditor)
	void AddPrefixesAndSufixes();

	UFUNCTION(CallInEditor)
	void RemoveSelectedUnusetAssets();

	UFUNCTION(CallInEditor)
	void FixupRedirectors();

	UFUNCTION(CallInEditor)
	void AssetBatchRenaming(FString NameToSet, TArray<FString> suffix);

	//UFUNCTION(CallInEditor)
	//void CleanProject();

private:

	TMap<UClass*, FString> PrefixesMap =
	{
		{UBlueprint::StaticClass(),TEXT("BP_")},
		{UStaticMesh::StaticClass(),TEXT("SM_")},
		{UMaterial::StaticClass(), TEXT("M_")},
		{UMaterialInstanceConstant::StaticClass(),TEXT("MI_")},
		{UMaterialFunctionInterface::StaticClass(), TEXT("MF_")},
		{UParticleSystem::StaticClass(), TEXT("PS_")},
		{USoundCue::StaticClass(), TEXT("SC_")},
		{USoundWave::StaticClass(), TEXT("SW_")},
		{UTexture::StaticClass(), TEXT("T_")},
		{UTexture2D::StaticClass(), TEXT("T_")},
		{UUserWidget::StaticClass(), TEXT("WBP_")},
		{USkeletalMeshComponent::StaticClass(), TEXT("SK_")},
		{UNiagaraSystem::StaticClass(), TEXT("NS_")},
		{UNiagaraEmitter::StaticClass(), TEXT("NE_")}
		
	};

	void MaterialInstanceExceptions(UObject* SelectedObject, FString& objectOldName)
	{
		if (SelectedObject->GetName().StartsWith(TEXT("MM_")))
		{
			objectOldName.RemoveFromStart("MM_", ESearchCase::CaseSensitive);
		}

		else if (SelectedObject->GetName().StartsWith(TEXT("M_")))
		{
			objectOldName.RemoveFromStart("M_", ESearchCase::CaseSensitive);
		}

		if (SelectedObject->GetName().EndsWith(TEXT("_Inst")))
		{
			objectOldName.RemoveFromEnd("_Inst", ESearchCase::IgnoreCase);
		}
	}
};
