#pragma once
#include "CoreMinimal.h"
#include "ERCCompanionAiMoveType.generated.h"

UENUM(BlueprintType)
enum class ERCCompanionAiMoveType : uint8 {
    Stop,
    Move,
    Leave,
    Warp,
    Off,
};

