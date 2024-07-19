#pragma once
#include "CoreMinimal.h"
#include "EMotionEventSlotSwitchType.generated.h"

UENUM(BlueprintType)
enum class EMotionEventSlotSwitchType : uint8 {
    None,
    Start,
    StartFromLoop,
    Pause,
    Reset,
    EndToLoop,
};

