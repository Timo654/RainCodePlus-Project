#pragma once
#include "CoreMinimal.h"
#include "ERCStaffRollPlatform.generated.h"

UENUM(BlueprintType)
enum class ERCStaffRollPlatform : uint8 {
    Switch,
    PS5,
    Xbox,
    Steam,
};

