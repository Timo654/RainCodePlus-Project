#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleRebuttalLetterType.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleRebuttalLetterType : uint8 {
    Normal,
    Incorrect,
    Correct,
    Disturb,
    None,
    Max,
};

