#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDSoundNovelCommand.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDSoundNovelCommand : uint8 {
    Text,
    BackgroundFadeIn,
    BackgroundFadeOut,
    CutinStart,
    CutinFinish,
    CutinAnimNext,
    Max,
};

