#pragma once
#include "CoreMinimal.h"
#include "ERCEnvironmentChangeRainType.generated.h"

UENUM(BlueprintType)
enum class ERCEnvironmentChangeRainType : uint8 {
    None,
    RainOn,
    RainOff,
};

