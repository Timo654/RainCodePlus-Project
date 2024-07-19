#pragma once
#include "CoreMinimal.h"
#include "ERCOptionConsumerQualityMode.generated.h"

UENUM(BlueprintType)
enum class ERCOptionConsumerQualityMode : uint8 {
    Quality,
    Performance,
    Max,
};

