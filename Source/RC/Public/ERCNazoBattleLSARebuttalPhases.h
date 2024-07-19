#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleLSARebuttalPhases.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleLSARebuttalPhases : uint8 {
    Invalid,
    StandBy,
    Delay,
    Move,
    Cutin,
    BeforeIn,
    Wormhole,
    Stay,
    Rebuttal,
    Out,
    Hit,
    Slashed,
    SlashStopped,
    Repelled,
    Finished,
    None,
    Max,
};

