#pragma once
#include "CoreMinimal.h"
#include "ERCCheckActorKaiKagiSelectResult.generated.h"

UENUM(BlueprintType)
enum class ERCCheckActorKaiKagiSelectResult : uint8 {
    Invalid,
    Correct,
    Incorrect,
    TimeOver,
    Cancel,
    Failed,
};

