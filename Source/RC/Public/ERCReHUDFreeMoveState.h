#pragma once
#include "CoreMinimal.h"
#include "ERCReHUDFreeMoveState.generated.h"

UENUM(BlueprintType)
enum class ERCReHUDFreeMoveState : uint8 {
    None,
    Start,
    Run,
    Finish,
    FinishByTalk,
    NoneByTalk,
    FinishBySelect,
    NoneBySelect,
    Max,
};

