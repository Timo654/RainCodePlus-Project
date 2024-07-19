#pragma once
#include "CoreMinimal.h"
#include "ERCStaffRollRegion.generated.h"

UENUM(BlueprintType)
enum class ERCStaffRollRegion : uint8 {
    Asia,
    EU,
    US,
    KR,
    All,
};

