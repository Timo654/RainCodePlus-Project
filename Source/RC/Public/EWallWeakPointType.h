#pragma once
#include "CoreMinimal.h"
#include "EWallWeakPointType.generated.h"

UENUM(BlueprintType)
enum class EWallWeakPointType : uint8 {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    Center,
    KAIKAGI,
    JUMP,
    NONE,
};

