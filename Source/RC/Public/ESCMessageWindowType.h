#pragma once
#include "CoreMinimal.h"
#include "ESCMessageWindowType.generated.h"

UENUM(BlueprintType)
enum class ESCMessageWindowType : uint8 {
    Normal,
    Reverse,
    Max,
};

