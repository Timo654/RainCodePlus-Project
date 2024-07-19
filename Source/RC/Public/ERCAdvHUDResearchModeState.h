#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDResearchModeState.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDResearchModeState : uint8 {
    None,
    Start,
    Run,
    Finish,
    DetailStart,
    DetailRun,
    DetailFinish,
    ToDetail,
    ToNormal,
    Max,
};

