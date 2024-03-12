// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GPE230_Verschueren : ModuleRules
{
	public GPE230_Verschueren(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Niagara", "EnhancedInput" });
	}
}
