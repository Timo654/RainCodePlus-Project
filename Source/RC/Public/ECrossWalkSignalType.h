#pragma once
#include "CoreMinimal.h"
#include "ECrossWalkSignalType.generated.h"

UENUM(BlueprintType)
enum class ECrossWalkSignalType : uint8 {
    Red,
    Yellow,
    Blue,
    MAX,
};

