#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleDisturbLetterAppearPosition.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleDisturbLetterAppearPosition : uint8 {
    Left,
    Right,
    PlayerSide,
    OtherSide,
    RebuttalSide,
    RebuttalReverseSide,
    SameBefore,
    ReverseBefore,
    Max,
};

