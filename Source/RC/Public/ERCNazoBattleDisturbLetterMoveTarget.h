#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleDisturbLetterMoveTarget.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleDisturbLetterMoveTarget : uint8 {
    Top,
    Left,
    Right,
    Bottom,
    Index,
    World,
    Max,
};

