// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class topdown_hero : ModuleRules
{
	public topdown_hero(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
