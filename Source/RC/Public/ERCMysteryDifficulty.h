#pragma once
#include "CoreMinimal.h"
#include "ERCMysteryDifficulty.generated.h"

UENUM(BlueprintType)
enum class ERCMysteryDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    Max,
};

