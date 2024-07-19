#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleRebuttalLetterMiddleLRType.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleRebuttalLetterMiddleLRType : uint8 {
    Default,
    Left,
    Right,
    ReversePlayer,
    NoChangeBefore,
    ReverseBefore,
    Max,
};

