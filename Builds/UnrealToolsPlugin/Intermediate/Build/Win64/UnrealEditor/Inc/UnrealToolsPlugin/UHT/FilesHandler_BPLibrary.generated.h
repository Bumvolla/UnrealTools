// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPLibraries/FilesHandler_BPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDialogResult : uint8;
#ifdef UNREALTOOLSPLUGIN_FilesHandler_BPLibrary_generated_h
#error "FilesHandler_BPLibrary.generated.h already included, missing '#pragma once' in FilesHandler_BPLibrary.h"
#endif
#define UNREALTOOLSPLUGIN_FilesHandler_BPLibrary_generated_h

#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_SPARSE_DATA
#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDirectory); \
	DECLARE_FUNCTION(execOpenDirectoryDialog); \
	DECLARE_FUNCTION(execOpenFileDialog); \
	DECLARE_FUNCTION(execSaveFile);


#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_ACCESSORS
#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFilePickerPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFilePickerPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFilePickerPluginBPLibrary)


#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilePickerPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilePickerPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilePickerPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilePickerPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFilePickerPluginBPLibrary(UFilePickerPluginBPLibrary&&); \
	NO_API UFilePickerPluginBPLibrary(const UFilePickerPluginBPLibrary&); \
public: \
	NO_API virtual ~UFilePickerPluginBPLibrary();


#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_17_PROLOG
#define FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_SPARSE_DATA \
	FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_RPC_WRAPPERS \
	FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_ACCESSORS \
	FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_INCLASS \
	FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<class UFilePickerPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_FilesHandler_BPLibrary_h


#define FOREACH_ENUM_EDIALOGRESULT(op) \
	op(EDialogResult::Successful) \
	op(EDialogResult::Cancelled) 

enum class EDialogResult : uint8;
template<> struct TIsUEnumClass<EDialogResult> { enum { Value = true }; };
template<> UNREALTOOLSPLUGIN_API UEnum* StaticEnum<EDialogResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
