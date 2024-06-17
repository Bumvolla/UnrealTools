// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToolsPlugin/Public/BPLibraries/DisplayLibrary_BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayLibrary_BPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UDisplayLibrary_BPLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UDisplayLibrary_BPLibrary_NoRegister();
	UNREALTOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealToolsPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayInfo;
class UScriptStruct* FDisplayInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayInfo, (UObject*)Z_Construct_UPackage__Script_UnrealToolsPlugin(), TEXT("DisplayInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayInfo.OuterSingleton;
}
template<> UNREALTOOLSPLUGIN_API UScriptStruct* StaticStruct<FDisplayInfo>()
{
	return FDisplayInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NativeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NativeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimary_MetaData[];
#endif
		static void NewProp_bIsPrimary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DPI_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Displays" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Displays" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayInfo, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeWidth_MetaData[] = {
		{ "Category", "Displays" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeWidth = { "NativeWidth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayInfo, NativeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeWidth_MetaData), Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeHeight_MetaData[] = {
		{ "Category", "Displays" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeHeight = { "NativeHeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayInfo, NativeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeHeight_MetaData), Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_MaxResolution_MetaData[] = {
		{ "Category", "Displays" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_MaxResolution = { "MaxResolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayInfo, MaxResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_MaxResolution_MetaData), Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_MaxResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_bIsPrimary_MetaData[] = {
		{ "Category", "Displays" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_bIsPrimary_SetBit(void* Obj)
	{
		((FDisplayInfo*)Obj)->bIsPrimary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_bIsPrimary = { "bIsPrimary", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayInfo), &Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_bIsPrimary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_bIsPrimary_MetaData), Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_bIsPrimary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_DPI_MetaData[] = {
		{ "Category", "Displays" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_DPI = { "DPI", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayInfo, DPI), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_DPI_MetaData), Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_DPI_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_NativeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_MaxResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_bIsPrimary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewProp_DPI,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
		nullptr,
		&NewStructOps,
		"DisplayInfo",
		Z_Construct_UScriptStruct_FDisplayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::PropPointers),
		sizeof(FDisplayInfo),
		alignof(FDisplayInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayInfo.InnerSingleton, Z_Construct_UScriptStruct_FDisplayInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UDisplayLibrary_BPLibrary::execSetActiveDisplay)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DisplayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDisplayLibrary_BPLibrary::SetActiveDisplay(Z_Param_DisplayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayLibrary_BPLibrary::execGetAllDisplays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDisplayInfo>*)Z_Param__Result=UDisplayLibrary_BPLibrary::GetAllDisplays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayLibrary_BPLibrary::execGetDisplayCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDisplayLibrary_BPLibrary::GetDisplayCount();
		P_NATIVE_END;
	}
	void UDisplayLibrary_BPLibrary::StaticRegisterNativesUDisplayLibrary_BPLibrary()
	{
		UClass* Class = UDisplayLibrary_BPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllDisplays", &UDisplayLibrary_BPLibrary::execGetAllDisplays },
			{ "GetDisplayCount", &UDisplayLibrary_BPLibrary::execGetDisplayCount },
			{ "SetActiveDisplay", &UDisplayLibrary_BPLibrary::execSetActiveDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics
	{
		struct DisplayLibrary_BPLibrary_eventGetAllDisplays_Parms
		{
			TArray<FDisplayInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDisplayInfo, METADATA_PARAMS(0, nullptr) }; // 2137747427
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DisplayLibrary_BPLibrary_eventGetAllDisplays_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2137747427
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display Library" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayLibrary_BPLibrary, nullptr, "GetAllDisplays", nullptr, nullptr, Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::DisplayLibrary_BPLibrary_eventGetAllDisplays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::DisplayLibrary_BPLibrary_eventGetAllDisplays_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics
	{
		struct DisplayLibrary_BPLibrary_eventGetDisplayCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DisplayLibrary_BPLibrary_eventGetDisplayCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display Library" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayLibrary_BPLibrary, nullptr, "GetDisplayCount", nullptr, nullptr, Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::DisplayLibrary_BPLibrary_eventGetDisplayCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::DisplayLibrary_BPLibrary_eventGetDisplayCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics
	{
		struct DisplayLibrary_BPLibrary_eventSetActiveDisplay_Parms
		{
			int32 DisplayIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::NewProp_DisplayIndex = { "DisplayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DisplayLibrary_BPLibrary_eventSetActiveDisplay_Parms, DisplayIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayLibrary_BPLibrary_eventSetActiveDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DisplayLibrary_BPLibrary_eventSetActiveDisplay_Parms), &Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::NewProp_DisplayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display Library" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayLibrary_BPLibrary, nullptr, "SetActiveDisplay", nullptr, nullptr, Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::DisplayLibrary_BPLibrary_eventSetActiveDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::DisplayLibrary_BPLibrary_eventSetActiveDisplay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayLibrary_BPLibrary);
	UClass* Z_Construct_UClass_UDisplayLibrary_BPLibrary_NoRegister()
	{
		return UDisplayLibrary_BPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetAllDisplays, "GetAllDisplays" }, // 4012403144
		{ &Z_Construct_UFunction_UDisplayLibrary_BPLibrary_GetDisplayCount, "GetDisplayCount" }, // 4242896508
		{ &Z_Construct_UFunction_UDisplayLibrary_BPLibrary_SetActiveDisplay, "SetActiveDisplay" }, // 3335460213
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPLibraries/DisplayLibrary_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/BPLibraries/DisplayLibrary_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayLibrary_BPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::ClassParams = {
		&UDisplayLibrary_BPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisplayLibrary_BPLibrary()
	{
		if (!Z_Registration_Info_UClass_UDisplayLibrary_BPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayLibrary_BPLibrary.OuterSingleton, Z_Construct_UClass_UDisplayLibrary_BPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayLibrary_BPLibrary.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<UDisplayLibrary_BPLibrary>()
	{
		return UDisplayLibrary_BPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayLibrary_BPLibrary);
	UDisplayLibrary_BPLibrary::~UDisplayLibrary_BPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FDisplayInfo::StaticStruct, Z_Construct_UScriptStruct_FDisplayInfo_Statics::NewStructOps, TEXT("DisplayInfo"), &Z_Registration_Info_UScriptStruct_DisplayInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayInfo), 2137747427U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayLibrary_BPLibrary, UDisplayLibrary_BPLibrary::StaticClass, TEXT("UDisplayLibrary_BPLibrary"), &Z_Registration_Info_UClass_UDisplayLibrary_BPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayLibrary_BPLibrary), 735329252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_2579461706(TEXT("/Script/UnrealToolsPlugin"),
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_DisplayLibrary_BPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
