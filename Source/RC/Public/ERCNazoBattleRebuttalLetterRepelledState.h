#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleRebuttalLetterRepelledState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleRebuttalLetterRepelledState : uint8 {
    Repelled,
    HitKaijin,
    PreventedByKaijin,
    Max,
};

