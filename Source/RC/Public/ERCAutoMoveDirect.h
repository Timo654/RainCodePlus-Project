#pragma once
#include "CoreMinimal.h"
#include "ERCAutoMoveDirect.generated.h"

UENUM(BlueprintType)
enum class ERCAutoMoveDirect : uint8 {
    None,
    North,
    East,
    South,
    West,
    Max,
};

