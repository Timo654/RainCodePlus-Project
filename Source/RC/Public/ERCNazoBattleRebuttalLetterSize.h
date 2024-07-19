#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleRebuttalLetterSize.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleRebuttalLetterSize : uint8 {
    VerySmall,
    Small,
    Medium,
    Large,
    VeryLarge,
    Max,
};

