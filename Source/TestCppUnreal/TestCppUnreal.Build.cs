// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestCppUnreal : ModuleRules
{
	public TestCppUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
