#pragma once
#include "CoreMinimal.h"
#include "ERCInputPlatform.generated.h"

UENUM(BlueprintType)
enum class ERCInputPlatform : uint8 {
    DualShock4,
    DualSense,
    XBoxController,
    JoyController,
    ProController,
    Keyboard,
};

