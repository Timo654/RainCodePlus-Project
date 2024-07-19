using UnrealBuildTool;

public class RainCodePlusGameTarget : TargetRules {
	public RainCodePlusGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"FreeTimeline",
			"RC",
			"RCEffect",
			"RCLoadingScreen",
			"RCSeqEvent",
		});
	}
}
