// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Demon3 : ModuleRules
{
	public Demon3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
