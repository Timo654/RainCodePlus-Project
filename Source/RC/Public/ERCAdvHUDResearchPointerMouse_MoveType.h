#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDResearchPointerMouse_MoveType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDResearchPointerMouse_MoveType : uint8 {
    Absolute,
    Relative,
    Max,
};

