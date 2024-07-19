#pragma once
#include "CoreMinimal.h"
#include "ERCNazoPlayableLoopLSAState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoPlayableLoopLSAState : uint8 {
    None,
    Loading,
    DelayAfterLoading,
    Initialize,
    PlayableLoop,
    LoopFinished,
    Max,
};

