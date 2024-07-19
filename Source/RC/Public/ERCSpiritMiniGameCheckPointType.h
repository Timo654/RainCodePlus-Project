#pragma once
#include "CoreMinimal.h"
#include "ERCSpiritMiniGameCheckPointType.generated.h"

UENUM(BlueprintType)
enum class ERCSpiritMiniGameCheckPointType : uint8 {
    CheckPoint_A,
    CheckPoint_B,
    CheckPoint_C,
    CheckPoint_D,
    CheckPoint_E,
    Max,
};

