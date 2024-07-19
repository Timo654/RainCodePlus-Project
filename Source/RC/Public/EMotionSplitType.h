#pragma once
#include "CoreMinimal.h"
#include "EMotionSplitType.generated.h"

UENUM(BlueprintType)
enum class EMotionSplitType : uint8 {
    None,
    In,
    Loop,
    Out = 4,
    InLoop = 3,
    LoopOut = 6,
    InLoopOut,
};

