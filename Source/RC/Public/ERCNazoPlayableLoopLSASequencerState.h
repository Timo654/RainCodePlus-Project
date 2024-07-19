#pragma once
#include "CoreMinimal.h"
#include "ERCNazoPlayableLoopLSASequencerState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoPlayableLoopLSASequencerState : uint8 {
    Stopping,
    BeforePlay,
    Playing,
    Paused,
    Max,
};

