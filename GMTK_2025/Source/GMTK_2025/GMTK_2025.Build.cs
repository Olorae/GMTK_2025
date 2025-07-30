// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GMTK_2025 : ModuleRules
{
	public GMTK_2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule" });
	}
}
