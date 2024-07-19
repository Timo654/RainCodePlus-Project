using UnrealBuildTool;

public class RainCodePlusEditorTarget : TargetRules {
	public RainCodePlusEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
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
