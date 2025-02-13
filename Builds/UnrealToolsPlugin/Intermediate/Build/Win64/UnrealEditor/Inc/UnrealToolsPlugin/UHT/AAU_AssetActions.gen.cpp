// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToolsPlugin/Public/AssetActions/AAU_AssetActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAU_AssetActions() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UAAU_AssetActions();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UAAU_AssetActions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealToolsPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UAAU_AssetActions::execAssetBatchRenaming)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NameToSet);
		P_GET_TARRAY(FString,Z_Param_suffix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetBatchRenaming(Z_Param_NameToSet,Z_Param_suffix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAAU_AssetActions::execFixupRedirectors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FixupRedirectors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAAU_AssetActions::execRemoveSelectedUnusetAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSelectedUnusetAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAAU_AssetActions::execAddPrefixesAndSufixes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrefixesAndSufixes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAAU_AssetActions::execBatchDuplicate)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_numOfDuplicates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BatchDuplicate(Z_Param_numOfDuplicates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAAU_AssetActions::execExecuteSaveThumbnailAsTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteSaveThumbnailAsTexture();
		P_NATIVE_END;
	}
	void UAAU_AssetActions::StaticRegisterNativesUAAU_AssetActions()
	{
		UClass* Class = UAAU_AssetActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrefixesAndSufixes", &UAAU_AssetActions::execAddPrefixesAndSufixes },
			{ "AssetBatchRenaming", &UAAU_AssetActions::execAssetBatchRenaming },
			{ "BatchDuplicate", &UAAU_AssetActions::execBatchDuplicate },
			{ "ExecuteSaveThumbnailAsTexture", &UAAU_AssetActions::execExecuteSaveThumbnailAsTexture },
			{ "FixupRedirectors", &UAAU_AssetActions::execFixupRedirectors },
			{ "RemoveSelectedUnusetAssets", &UAAU_AssetActions::execRemoveSelectedUnusetAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/AAU_AssetActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAU_AssetActions, nullptr, "AddPrefixesAndSufixes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics
	{
		struct AAU_AssetActions_eventAssetBatchRenaming_Parms
		{
			FString NameToSet;
			TArray<FString> suffix;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameToSet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_suffix_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_suffix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::NewProp_NameToSet = { "NameToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAU_AssetActions_eventAssetBatchRenaming_Parms, NameToSet), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::NewProp_suffix_Inner = { "suffix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::NewProp_suffix = { "suffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAU_AssetActions_eventAssetBatchRenaming_Parms, suffix), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::NewProp_NameToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::NewProp_suffix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::NewProp_suffix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/AAU_AssetActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAU_AssetActions, nullptr, "AssetBatchRenaming", nullptr, nullptr, Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::AAU_AssetActions_eventAssetBatchRenaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::AAU_AssetActions_eventAssetBatchRenaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics
	{
		struct AAU_AssetActions_eventBatchDuplicate_Parms
		{
			uint32 numOfDuplicates;
		};
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_numOfDuplicates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::NewProp_numOfDuplicates = { "numOfDuplicates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAU_AssetActions_eventBatchDuplicate_Parms, numOfDuplicates), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::NewProp_numOfDuplicates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/AAU_AssetActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAU_AssetActions, nullptr, "BatchDuplicate", nullptr, nullptr, Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::AAU_AssetActions_eventBatchDuplicate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::AAU_AssetActions_eventBatchDuplicate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/AAU_AssetActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAU_AssetActions, nullptr, "ExecuteSaveThumbnailAsTexture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/AAU_AssetActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAU_AssetActions, nullptr, "FixupRedirectors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/AAU_AssetActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAAU_AssetActions, nullptr, "RemoveSelectedUnusetAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAAU_AssetActions);
	UClass* Z_Construct_UClass_UAAU_AssetActions_NoRegister()
	{
		return UAAU_AssetActions::StaticClass();
	}
	struct Z_Construct_UClass_UAAU_AssetActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAAU_AssetActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAAU_AssetActions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAAU_AssetActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAAU_AssetActions_AddPrefixesAndSufixes, "AddPrefixesAndSufixes" }, // 2023155389
		{ &Z_Construct_UFunction_UAAU_AssetActions_AssetBatchRenaming, "AssetBatchRenaming" }, // 2752683883
		{ &Z_Construct_UFunction_UAAU_AssetActions_BatchDuplicate, "BatchDuplicate" }, // 4226475535
		{ &Z_Construct_UFunction_UAAU_AssetActions_ExecuteSaveThumbnailAsTexture, "ExecuteSaveThumbnailAsTexture" }, // 734622210
		{ &Z_Construct_UFunction_UAAU_AssetActions_FixupRedirectors, "FixupRedirectors" }, // 2292393805
		{ &Z_Construct_UFunction_UAAU_AssetActions_RemoveSelectedUnusetAssets, "RemoveSelectedUnusetAssets" }, // 869971733
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAAU_AssetActions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAU_AssetActions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetActions/AAU_AssetActions.h" },
		{ "ModuleRelativePath", "Public/AssetActions/AAU_AssetActions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAAU_AssetActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAAU_AssetActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAAU_AssetActions_Statics::ClassParams = {
		&UAAU_AssetActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAAU_AssetActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UAAU_AssetActions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAAU_AssetActions()
	{
		if (!Z_Registration_Info_UClass_UAAU_AssetActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAAU_AssetActions.OuterSingleton, Z_Construct_UClass_UAAU_AssetActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAAU_AssetActions.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<UAAU_AssetActions>()
	{
		return UAAU_AssetActions::StaticClass();
	}
	UAAU_AssetActions::UAAU_AssetActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAAU_AssetActions);
	UAAU_AssetActions::~UAAU_AssetActions() {}
	struct Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_AssetActions_AAU_AssetActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_AssetActions_AAU_AssetActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAAU_AssetActions, UAAU_AssetActions::StaticClass, TEXT("UAAU_AssetActions"), &Z_Registration_Info_UClass_UAAU_AssetActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAAU_AssetActions), 4021890980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_AssetActions_AAU_AssetActions_h_3751313659(TEXT("/Script/UnrealToolsPlugin"),
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_AssetActions_AAU_AssetActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_AssetActions_AAU_AssetActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
