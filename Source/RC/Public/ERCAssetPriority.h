#pragma once
#include "CoreMinimal.h"
#include "ERCAssetPriority.generated.h"

UENUM(BlueprintType)
enum class ERCAssetPriority : uint8 {
    Sync,
    Hi,
    Middle,
    Low,
};

