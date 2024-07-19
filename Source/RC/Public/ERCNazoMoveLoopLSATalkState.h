#pragma once
#include "CoreMinimal.h"
#include "ERCNazoMoveLoopLSATalkState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoMoveLoopLSATalkState : uint8 {
    None,
    DelayBeforeTalk,
    Talk,
    DelayAfterTalk,
    Max,
};

