#pragma once
#include "CoreMinimal.h"
#include "ERCAmatanUIButton.generated.h"

UENUM(BlueprintType)
enum class ERCAmatanUIButton : uint8 {
    ATab_None,
    ATab_Extend_Arm,
    ATab_Arm_Enabled,
    ATab_Arm_Disabled,
    ATab_Buzz_Siren,
    ATab_Buzz_Horn,
    ATab_Buzz_Bell,
    ATab_Buzz_Piano,
};

