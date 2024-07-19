#pragma once
#include "CoreMinimal.h"
#include "ERCSequenceJumpType.generated.h"

UENUM(BlueprintType)
enum class ERCSequenceJumpType : uint8 {
    Label,
    Frame,
    Seconds,
    Max,
};

