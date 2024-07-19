#pragma once
#include "CoreMinimal.h"
#include "ERCInputButtonType.generated.h"

UENUM(BlueprintType)
enum class ERCInputButtonType : uint8 {
    Button,
    LeverPlus,
    LeverMinus,
    Pointer,
};

