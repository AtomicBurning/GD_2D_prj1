// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GD_2D_prj1 : ModuleRules
{
	public GD_2D_prj1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Paper2D", "EnhancedInput" });
	}
}
