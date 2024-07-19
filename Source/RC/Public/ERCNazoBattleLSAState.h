#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleLSAState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleLSAState : uint8 {
    None,
    Loading,
    DelayAfterLoading,
    Initialize,
    Battle,
    FadeOut,
    Finished,
    Max,
};

