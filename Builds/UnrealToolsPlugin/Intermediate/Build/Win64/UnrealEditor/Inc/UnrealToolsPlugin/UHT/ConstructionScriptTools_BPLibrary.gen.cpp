// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToolsPlugin/Public/BPLibraries/ConstructionScriptTools_BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionScriptTools_BPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UConstructionScriptToolsBPLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UConstructionScriptToolsBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealToolsPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UConstructionScriptToolsBPLibrary::execRerunAllClassActorsConstructionScript)
	{
		P_GET_OBJECT(AActor,Z_Param_thisActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstructionScriptToolsBPLibrary::RerunAllClassActorsConstructionScript(Z_Param_thisActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstructionScriptToolsBPLibrary::execRerunConstructionScript)
	{
		P_GET_OBJECT(AActor,Z_Param_objectToConstruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstructionScriptToolsBPLibrary::RerunConstructionScript(Z_Param_objectToConstruct);
		P_NATIVE_END;
	}
	void UConstructionScriptToolsBPLibrary::StaticRegisterNativesUConstructionScriptToolsBPLibrary()
	{
		UClass* Class = UConstructionScriptToolsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RerunAllClassActorsConstructionScript", &UConstructionScriptToolsBPLibrary::execRerunAllClassActorsConstructionScript },
			{ "RerunConstructionScript", &UConstructionScriptToolsBPLibrary::execRerunConstructionScript },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics
	{
		struct ConstructionScriptToolsBPLibrary_eventRerunAllClassActorsConstructionScript_Parms
		{
			const AActor* thisActor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thisActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thisActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::NewProp_thisActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::NewProp_thisActor = { "thisActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructionScriptToolsBPLibrary_eventRerunAllClassActorsConstructionScript_Parms, thisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::NewProp_thisActor_MetaData), Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::NewProp_thisActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::NewProp_thisActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction Script Tools" },
		{ "ModuleRelativePath", "Public/BPLibraries/ConstructionScriptTools_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionScriptToolsBPLibrary, nullptr, "RerunAllClassActorsConstructionScript", nullptr, nullptr, Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::ConstructionScriptToolsBPLibrary_eventRerunAllClassActorsConstructionScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::ConstructionScriptToolsBPLibrary_eventRerunAllClassActorsConstructionScript_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics
	{
		struct ConstructionScriptToolsBPLibrary_eventRerunConstructionScript_Parms
		{
			AActor* objectToConstruct;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectToConstruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::NewProp_objectToConstruct = { "objectToConstruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructionScriptToolsBPLibrary_eventRerunConstructionScript_Parms, objectToConstruct), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::NewProp_objectToConstruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction Script Tools" },
		{ "ModuleRelativePath", "Public/BPLibraries/ConstructionScriptTools_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionScriptToolsBPLibrary, nullptr, "RerunConstructionScript", nullptr, nullptr, Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::ConstructionScriptToolsBPLibrary_eventRerunConstructionScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::ConstructionScriptToolsBPLibrary_eventRerunConstructionScript_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstructionScriptToolsBPLibrary);
	UClass* Z_Construct_UClass_UConstructionScriptToolsBPLibrary_NoRegister()
	{
		return UConstructionScriptToolsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunAllClassActorsConstructionScript, "RerunAllClassActorsConstructionScript" }, // 2807324977
		{ &Z_Construct_UFunction_UConstructionScriptToolsBPLibrary_RerunConstructionScript, "RerunConstructionScript" }, // 1012680093
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPLibraries/ConstructionScriptTools_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/BPLibraries/ConstructionScriptTools_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionScriptToolsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::ClassParams = {
		&UConstructionScriptToolsBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UConstructionScriptToolsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UConstructionScriptToolsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstructionScriptToolsBPLibrary.OuterSingleton, Z_Construct_UClass_UConstructionScriptToolsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstructionScriptToolsBPLibrary.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<UConstructionScriptToolsBPLibrary>()
	{
		return UConstructionScriptToolsBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionScriptToolsBPLibrary);
	UConstructionScriptToolsBPLibrary::~UConstructionScriptToolsBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_ConstructionScriptTools_BPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_ConstructionScriptTools_BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConstructionScriptToolsBPLibrary, UConstructionScriptToolsBPLibrary::StaticClass, TEXT("UConstructionScriptToolsBPLibrary"), &Z_Registration_Info_UClass_UConstructionScriptToolsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstructionScriptToolsBPLibrary), 2125160400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_ConstructionScriptTools_BPLibrary_h_1280788002(TEXT("/Script/UnrealToolsPlugin"),
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_ConstructionScriptTools_BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_ConstructionScriptTools_BPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
