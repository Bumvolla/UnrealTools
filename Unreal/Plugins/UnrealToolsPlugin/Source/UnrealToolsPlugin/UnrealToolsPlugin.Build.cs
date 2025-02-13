// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealToolsPlugin : ModuleRules
{
	public UnrealToolsPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        if (Target.bBuildEditor)
        {
            PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd", });
        }

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "/Source/Editor/Blutility/Private/",
            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "AssetRegistry",
                "UMG",
                "Niagara",
                "AssetTools",
                "ContentBrowser",
                "EditorScriptingUtilities",
                "Blutility",
                "UnrealEd",
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "ApplicationCore",
                "Projects",
                "InputCore",
                "EditorFramework",
                "ToolMenus",
				"UnrealEd",
				"Projects",




				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
