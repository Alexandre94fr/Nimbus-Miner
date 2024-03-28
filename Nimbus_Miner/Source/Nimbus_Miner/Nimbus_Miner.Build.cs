// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Nimbus_Miner : ModuleRules
{
	public Nimbus_Miner(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
