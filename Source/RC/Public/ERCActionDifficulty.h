#pragma once
#include "CoreMinimal.h"
#include "ERCActionDifficulty.generated.h"

UENUM(BlueprintType)
enum class ERCActionDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    Max,
};

