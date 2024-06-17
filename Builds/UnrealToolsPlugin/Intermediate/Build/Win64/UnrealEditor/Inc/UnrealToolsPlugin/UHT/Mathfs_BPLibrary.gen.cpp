// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToolsPlugin/Public/BPLibraries/Math/Mathfs_BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathfs_BPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UMathfsBPLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UMathfsBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealToolsPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UMathfsBPLibrary::execAsinh)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMathfsBPLibrary::Asinh(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathfsBPLibrary::execCosh)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMathfsBPLibrary::Cosh(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathfsBPLibrary::execSinh)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMathfsBPLibrary::Sinh(Z_Param_x);
		P_NATIVE_END;
	}
	void UMathfsBPLibrary::StaticRegisterNativesUMathfsBPLibrary()
	{
		UClass* Class = UMathfsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Asinh", &UMathfsBPLibrary::execAsinh },
			{ "Cosh", &UMathfsBPLibrary::execCosh },
			{ "Sinh", &UMathfsBPLibrary::execSinh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics
	{
		struct MathfsBPLibrary_eventAsinh_Parms
		{
			float x;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathfsBPLibrary_eventAsinh_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::NewProp_x_MetaData), Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::NewProp_x_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathfsBPLibrary_eventAsinh_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "CompactNodeTitle", "Asinh" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Mathfs_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathfsBPLibrary, nullptr, "Asinh", nullptr, nullptr, Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::MathfsBPLibrary_eventAsinh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::MathfsBPLibrary_eventAsinh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMathfsBPLibrary_Asinh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathfsBPLibrary_Asinh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics
	{
		struct MathfsBPLibrary_eventCosh_Parms
		{
			float x;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathfsBPLibrary_eventCosh_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::NewProp_x_MetaData), Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::NewProp_x_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathfsBPLibrary_eventCosh_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "CompactNodeTitle", "Cosh" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Mathfs_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathfsBPLibrary, nullptr, "Cosh", nullptr, nullptr, Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::MathfsBPLibrary_eventCosh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::MathfsBPLibrary_eventCosh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMathfsBPLibrary_Cosh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathfsBPLibrary_Cosh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics
	{
		struct MathfsBPLibrary_eventSinh_Parms
		{
			float x;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathfsBPLibrary_eventSinh_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::NewProp_x_MetaData), Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::NewProp_x_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathfsBPLibrary_eventSinh_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "//Hiperbolic sine\n" },
		{ "CompactNodeTitle", "Sinh" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Mathfs_BPLibrary.h" },
		{ "ToolTip", "Hiperbolic sine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathfsBPLibrary, nullptr, "Sinh", nullptr, nullptr, Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::MathfsBPLibrary_eventSinh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::MathfsBPLibrary_eventSinh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMathfsBPLibrary_Sinh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathfsBPLibrary_Sinh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMathfsBPLibrary);
	UClass* Z_Construct_UClass_UMathfsBPLibrary_NoRegister()
	{
		return UMathfsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMathfsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMathfsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMathfsBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMathfsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMathfsBPLibrary_Asinh, "Asinh" }, // 1579948818
		{ &Z_Construct_UFunction_UMathfsBPLibrary_Cosh, "Cosh" }, // 3240679817
		{ &Z_Construct_UFunction_UMathfsBPLibrary_Sinh, "Sinh" }, // 4084121883
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMathfsBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMathfsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPLibraries/Math/Mathfs_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Mathfs_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMathfsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathfsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMathfsBPLibrary_Statics::ClassParams = {
		&UMathfsBPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMathfsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMathfsBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMathfsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UMathfsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMathfsBPLibrary.OuterSingleton, Z_Construct_UClass_UMathfsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMathfsBPLibrary.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<UMathfsBPLibrary>()
	{
		return UMathfsBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathfsBPLibrary);
	UMathfsBPLibrary::~UMathfsBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Mathfs_BPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Mathfs_BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMathfsBPLibrary, UMathfsBPLibrary::StaticClass, TEXT("UMathfsBPLibrary"), &Z_Registration_Info_UClass_UMathfsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMathfsBPLibrary), 2186389675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Mathfs_BPLibrary_h_305272234(TEXT("/Script/UnrealToolsPlugin"),
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Mathfs_BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Mathfs_BPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
