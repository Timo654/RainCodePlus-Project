using UnrealBuildTool;

public class RC : ModuleRules {
    public RC(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "Foliage",
            "InputCore",
            "LevelSequence",
            "Niagara",
            "RCLoadingScreen",
            "SlateCore",
            "SpRuntime",
            "Text3D",
            "UMG"
        });
    }
}
