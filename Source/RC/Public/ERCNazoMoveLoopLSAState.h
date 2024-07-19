#pragma once
#include "CoreMinimal.h"
#include "ERCNazoMoveLoopLSAState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoMoveLoopLSAState : uint8 {
    None,
    Loading,
    DelayAfterLoading,
    Initialize,
    FadeIn,
    DelayAfterFadeIn,
    MoveLoop,
    DelayAfterMoveLoop,
    FadeOut,
    Finished,
    Max,
};

