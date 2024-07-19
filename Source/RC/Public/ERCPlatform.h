#pragma once
#include "CoreMinimal.h"
#include "ERCPlatform.generated.h"

UENUM(BlueprintType)
enum class ERCPlatform : uint8 {
    PlayStation4,
    PlayStation5,
    XboxSeriesX,
    NintendoSwitch,
    Steam,
};

