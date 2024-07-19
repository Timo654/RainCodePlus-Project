#pragma once
#include "CoreMinimal.h"
#include "ERCAutoPlayCompletionPred.generated.h"

UENUM(BlueprintType)
enum class ERCAutoPlayCompletionPred : uint8 {
    All,
    Translation,
    Rotation,
    Heading,
    Max,
};

