// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToolsPlugin/Public/BPLibraries/FilesHandler_BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilesHandler_BPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary_NoRegister();
	UNREALTOOLSPLUGIN_API UEnum* Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult();
	UPackage* Z_Construct_UPackage__Script_UnrealToolsPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogResult;
	static UEnum* EDialogResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult, (UObject*)Z_Construct_UPackage__Script_UnrealToolsPlugin(), TEXT("EDialogResult"));
		}
		return Z_Registration_Info_UEnum_EDialogResult.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UEnum* StaticEnum<EDialogResult>()
	{
		return EDialogResult_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::Enumerators[] = {
		{ "EDialogResult::Successful", (int64)EDialogResult::Successful },
		{ "EDialogResult::Cancelled", (int64)EDialogResult::Cancelled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::Enum_MetaDataParams[] = {
		{ "Cancelled.Name", "EDialogResult::Cancelled" },
		{ "Comment", "//Examples of using similar function and the file dialog filter here:\n//learn.microsoft.com/en-us/dotnet/api/system.windows.forms.openfiledialog\n" },
		{ "ModuleRelativePath", "Public/BPLibraries/FilesHandler_BPLibrary.h" },
		{ "Successful.Name", "EDialogResult::Successful" },
		{ "ToolTip", "Examples of using similar function and the file dialog filter here:\nlearn.microsoft.com/en-us/dotnet/api/system.windows.forms.openfiledialog" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
		nullptr,
		"EDialogResult",
		"EDialogResult",
		Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult()
	{
		if (!Z_Registration_Info_UEnum_EDialogResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogResult.InnerSingleton, Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UFilePickerPluginBPLibrary::execCreateDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFilePickerPluginBPLibrary::CreateDirectory(Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFilePickerPluginBPLibrary::execOpenDirectoryDialog)
	{
		P_GET_ENUM_REF(EDialogResult,Z_Param_Out_OutputPin);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFilePickerPluginBPLibrary::OpenDirectoryDialog((EDialogResult&)(Z_Param_Out_OutputPin),Z_Param_Out_FolderPath,Z_Param_DialogTitle,Z_Param_DefaultPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFilePickerPluginBPLibrary::execOpenFileDialog)
	{
		P_GET_ENUM_REF(EDialogResult,Z_Param_Out_OutputPin);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
		P_GET_UBOOL(Z_Param_IsMultiple);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFilePickerPluginBPLibrary::OpenFileDialog((EDialogResult&)(Z_Param_Out_OutputPin),Z_Param_Out_FilePath,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileType,Z_Param_IsMultiple);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFilePickerPluginBPLibrary::execSaveFile)
	{
		P_GET_ENUM_REF(EDialogResult,Z_Param_Out_OutputPin);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilename);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
		P_GET_UBOOL(Z_Param_IsMultiple);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFilePickerPluginBPLibrary::SaveFile((EDialogResult&)(Z_Param_Out_OutputPin),Z_Param_Out_OutFilename,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileType,Z_Param_IsMultiple);
		P_NATIVE_END;
	}
	void UFilePickerPluginBPLibrary::StaticRegisterNativesUFilePickerPluginBPLibrary()
	{
		UClass* Class = UFilePickerPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDirectory", &UFilePickerPluginBPLibrary::execCreateDirectory },
			{ "OpenDirectoryDialog", &UFilePickerPluginBPLibrary::execOpenDirectoryDialog },
			{ "OpenFileDialog", &UFilePickerPluginBPLibrary::execOpenFileDialog },
			{ "SaveFile", &UFilePickerPluginBPLibrary::execSaveFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics
	{
		struct FilePickerPluginBPLibrary_eventCreateDirectory_Parms
		{
			FString Directory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventCreateDirectory_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_Directory_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_Directory_MetaData) };
	void Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FilePickerPluginBPLibrary_eventCreateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FilePickerPluginBPLibrary_eventCreateDirectory_Parms), &Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePickerPlugin" },
		{ "ModuleRelativePath", "Public/BPLibraries/FilesHandler_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilePickerPluginBPLibrary, nullptr, "CreateDirectory", nullptr, nullptr, Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::FilePickerPluginBPLibrary_eventCreateDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::FilePickerPluginBPLibrary_eventCreateDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics
	{
		struct FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms
		{
			EDialogResult OutputPin;
			FString FolderPath;
			FString DialogTitle;
			FString DefaultPath;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputPin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, OutputPin), Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult, METADATA_PARAMS(0, nullptr) }; // 1424709288
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, FolderPath), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePickerPlugin" },
		{ "CPP_Default_DefaultPath", "" },
		{ "CPP_Default_DialogTitle", "Open Directory Dialog" },
		{ "ExpandEnumAsExecs", "OutputPin" },
		{ "ModuleRelativePath", "Public/BPLibraries/FilesHandler_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilePickerPluginBPLibrary, nullptr, "OpenDirectoryDialog", nullptr, nullptr, Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics
	{
		struct FilePickerPluginBPLibrary_eventOpenFileDialog_Parms
		{
			EDialogResult OutputPin;
			TArray<FString> FilePath;
			FString DialogTitle;
			FString DefaultPath;
			FString DefaultFile;
			FString FileType;
			bool IsMultiple;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputPin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
		static void NewProp_IsMultiple_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMultiple;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, OutputPin), Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult, METADATA_PARAMS(0, nullptr) }; // 1424709288
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath_Inner = { "FilePath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, FilePath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, DefaultFile), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType_MetaData) };
	void Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple_SetBit(void* Obj)
	{
		((FilePickerPluginBPLibrary_eventOpenFileDialog_Parms*)Obj)->IsMultiple = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple = { "IsMultiple", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms), &Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePickerPlugin" },
		{ "CPP_Default_DefaultFile", "" },
		{ "CPP_Default_DefaultPath", "/path/path" },
		{ "CPP_Default_DialogTitle", "Open File Dialog" },
		{ "CPP_Default_FileType", "Any (Any File)|*.*" },
		{ "CPP_Default_IsMultiple", "false" },
		{ "ExpandEnumAsExecs", "OutputPin" },
		{ "ModuleRelativePath", "Public/BPLibraries/FilesHandler_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilePickerPluginBPLibrary, nullptr, "OpenFileDialog", nullptr, nullptr, Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::FilePickerPluginBPLibrary_eventOpenFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::FilePickerPluginBPLibrary_eventOpenFileDialog_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics
	{
		struct FilePickerPluginBPLibrary_eventSaveFile_Parms
		{
			EDialogResult OutputPin;
			TArray<FString> OutFilename;
			FString DialogTitle;
			FString DefaultPath;
			FString DefaultFile;
			FString FileType;
			bool IsMultiple;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputPin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilename_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
		static void NewProp_IsMultiple_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMultiple;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventSaveFile_Parms, OutputPin), Z_Construct_UEnum_UnrealToolsPlugin_EDialogResult, METADATA_PARAMS(0, nullptr) }; // 1424709288
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutFilename_Inner = { "OutFilename", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutFilename = { "OutFilename", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventSaveFile_Parms, OutFilename), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventSaveFile_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DialogTitle_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DialogTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventSaveFile_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultPath_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventSaveFile_Parms, DefaultFile), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultFile_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultFile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventSaveFile_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_FileType_MetaData), Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_FileType_MetaData) };
	void Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_IsMultiple_SetBit(void* Obj)
	{
		((FilePickerPluginBPLibrary_eventSaveFile_Parms*)Obj)->IsMultiple = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_IsMultiple = { "IsMultiple", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FilePickerPluginBPLibrary_eventSaveFile_Parms), &Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_IsMultiple_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutputPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutFilename_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_OutFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_DefaultFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::NewProp_IsMultiple,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePickerPlugin" },
		{ "CPP_Default_DefaultFile", "" },
		{ "CPP_Default_DefaultPath", "/path/path" },
		{ "CPP_Default_DialogTitle", "Save the file" },
		{ "CPP_Default_FileType", "Any (Any File)|*.*" },
		{ "CPP_Default_IsMultiple", "false" },
		{ "ExpandEnumAsExecs", "OutputPin" },
		{ "ModuleRelativePath", "Public/BPLibraries/FilesHandler_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilePickerPluginBPLibrary, nullptr, "SaveFile", nullptr, nullptr, Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::FilePickerPluginBPLibrary_eventSaveFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::FilePickerPluginBPLibrary_eventSaveFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilePickerPluginBPLibrary);
	UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary_NoRegister()
	{
		return UFilePickerPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFilePickerPluginBPLibrary_CreateDirectory, "CreateDirectory" }, // 3925103075
		{ &Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog, "OpenDirectoryDialog" }, // 1628901042
		{ &Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog, "OpenFileDialog" }, // 740898292
		{ &Z_Construct_UFunction_UFilePickerPluginBPLibrary_SaveFile, "SaveFile" }, // 2132738518
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPLibraries/FilesHandler_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/BPLibraries/FilesHandler_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilePickerPluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::ClassParams = {
		&UFilePickerPluginBPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFilePickerPluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilePickerPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilePickerPluginBPLibrary.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<UFilePickerPluginBPLibrary>()
	{
		return UFilePickerPluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilePickerPluginBPLibrary);
	UFilePickerPluginBPLibrary::~UFilePickerPluginBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_Statics::EnumInfo[] = {
		{ EDialogResult_StaticEnum, TEXT("EDialogResult"), &Z_Registration_Info_UEnum_EDialogResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1424709288U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilePickerPluginBPLibrary, UFilePickerPluginBPLibrary::StaticClass, TEXT("UFilePickerPluginBPLibrary"), &Z_Registration_Info_UClass_UFilePickerPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilePickerPluginBPLibrary), 4148011610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_3807230877(TEXT("/Script/UnrealToolsPlugin"),
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
