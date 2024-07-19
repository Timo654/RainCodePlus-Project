#pragma once
#include "CoreMinimal.h"
#include "ERCBoatAccelEventCode.generated.h"

UENUM(BlueprintType)
enum class ERCBoatAccelEventCode : uint8 {
    BTAccel_None,
    BTAccel_Stopped,
    BTAccel_Up,
    BTAccel_Step,
};

