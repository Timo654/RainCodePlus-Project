#pragma once
#include "CoreMinimal.h"
#include "ERCGrassStatus.generated.h"

UENUM(BlueprintType)
enum class ERCGrassStatus : uint8 {
    ChangingTransform,
    Trampled,
    Deformed,
    UnTrampling,
    UnDeforming,
    FreshlyDeformed,
    NOTHING,
};

