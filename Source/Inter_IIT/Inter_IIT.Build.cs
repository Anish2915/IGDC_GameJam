// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Inter_IIT : ModuleRules
{
	public Inter_IIT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
