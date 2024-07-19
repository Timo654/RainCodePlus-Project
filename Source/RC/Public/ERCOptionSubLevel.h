#pragma once
#include "CoreMinimal.h"
#include "ERCOptionSubLevel.generated.h"

UENUM(BlueprintType)
enum class ERCOptionSubLevel : uint8 {
    SubLevelLv0_Normal,
    SubLevelLv1_Low,
    Max,
};

