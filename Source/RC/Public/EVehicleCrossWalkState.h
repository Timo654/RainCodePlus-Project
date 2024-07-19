#pragma once
#include "CoreMinimal.h"
#include "EVehicleCrossWalkState.generated.h"

UENUM(BlueprintType)
enum class EVehicleCrossWalkState : uint8 {
    NoCheck,
    Check,
    Through,
};

