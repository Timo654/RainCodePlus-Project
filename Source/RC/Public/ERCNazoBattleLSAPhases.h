#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleLSAPhases.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleLSAPhases : uint8 {
    Invalid,
    PreEvent,
    Confrontation,
    Rebuttal,
    AttackSuccess,
    AttackFailure,
    CloseContest,
    NextRebuttalEvent,
    Interval,
    GameOver,
    ClearEvent,
    Max,
};

