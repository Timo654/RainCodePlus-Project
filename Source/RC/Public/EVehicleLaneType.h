#pragma once
#include "CoreMinimal.h"
#include "EVehicleLaneType.generated.h"

UENUM(BlueprintType)
enum class EVehicleLaneType : uint8 {
    Lane1,
    Lane2,
    Lane3,
    Lane4,
    Lane5,
    Lane6,
    MAX,
    NONE,
};

