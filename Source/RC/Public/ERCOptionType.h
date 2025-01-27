#pragma once
#include "CoreMinimal.h"
#include "ERCOptionType.generated.h"

UENUM(BlueprintType)
enum class ERCOptionType : uint8 {
    MinimapRotate,
    MinimapDraw,
    CameraAutoMove,
    MessageSpeed,
    SoundVolumeAll,
    SoundVolumeBGM,
    SoundVolumeSystemSE,
    SoundVolumeGameSE,
    SoundVolumeVoice,
    SubtitleDraw,
    BattleSubtitleDraw,
    VoiceLanguage,
    VoiceQuality,
    MovieQuality,
    ControllerVibration,
    ControllerReturnSwitch,
    CameraHorizontalReverse,
    CameraVerticalReverse,
    CameraSpeed,
    Brightness,
    WindowMode,
    ScreenResolution,
    Display,
    FramerateCap,
    VSync,
    AntiAliasingQuality,
    ShadowQuality,
    TextureQuality,
    PostprocessQuality,
    EffectQuality,
    InputPlatform,
    InputPlatformChange,
    DisplayScale,
    ConsumerQualityMode,
    CharacterQuality,
    UiQuality,
    MovQuality,
    SubLevelQuality,
    CharacterDrawQuality,
    MobNumQuality,
    TextLanguage,
    Max,
};

