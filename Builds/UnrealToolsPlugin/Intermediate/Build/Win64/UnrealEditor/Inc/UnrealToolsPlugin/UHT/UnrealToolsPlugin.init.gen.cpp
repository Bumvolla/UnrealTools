// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealToolsPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealToolsPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealToolsPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealToolsPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealToolsPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xA9B5F37D,
				0xF29FD560,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealToolsPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealToolsPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealToolsPlugin(Z_Construct_UPackage__Script_UnrealToolsPlugin, TEXT("/Script/UnrealToolsPlugin"), Z_Registration_Info_UPackage__Script_UnrealToolsPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA9B5F37D, 0xF29FD560));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
