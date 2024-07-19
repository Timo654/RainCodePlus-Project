#pragma once
#include "CoreMinimal.h"
#include "ERCDroneBehaviorType.generated.h"

UENUM(BlueprintType)
enum ERCDroneBehaviorType {
    idle,
    IDLE_TURN,
    walk,
};

