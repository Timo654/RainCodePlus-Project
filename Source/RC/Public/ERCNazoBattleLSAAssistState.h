#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleLSAAssistState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleLSAAssistState : uint8 {
    None,
    StandBy,
    In,
    Stay,
    Attack,
    Out,
    NoChara,
    Max,
};

