#pragma once
#include "CoreMinimal.h"
#include "ERCOptionQuality.generated.h"

UENUM(BlueprintType)
enum class ERCOptionQuality : uint8 {
    Epic,
    High,
    Middle,
    Low,
    Max,
};

