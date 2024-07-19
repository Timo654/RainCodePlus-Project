#pragma once
#include "CoreMinimal.h"
#include "ERCSelectTextTargetType.generated.h"

UENUM(BlueprintType)
enum class ERCSelectTextTargetType : uint8 {
    Non,
    CheckActor,
    SelectEventTrigger,
};

