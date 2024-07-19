#pragma once
#include "CoreMinimal.h"
#include "ERCInputHardwareType.generated.h"

UENUM(BlueprintType)
enum class ERCInputHardwareType : uint8 {
    Pad1,
    Pad2,
    Keyboard1,
    Keyboard2,
    Mouse,
    Max,
};

