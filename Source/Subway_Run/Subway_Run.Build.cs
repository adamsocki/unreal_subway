// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Subway_Run : ModuleRules
{
	public Subway_Run(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
