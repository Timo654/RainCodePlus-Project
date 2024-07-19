#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDResearchDetailType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDResearchDetailType : uint8 {
    Normal,
    PastVision_Present,
    PastVision_Past,
    SpotSelect,
    Max,
};

