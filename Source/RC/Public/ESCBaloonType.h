#pragma once
#include "CoreMinimal.h"
#include "ESCBaloonType.generated.h"

UENUM(BlueprintType)
enum class ESCBaloonType : uint8 {
    None,
    Normal,
    Cloudy,
    Heart,
    Max,
};

