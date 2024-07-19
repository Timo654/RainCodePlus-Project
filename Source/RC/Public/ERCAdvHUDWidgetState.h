#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDWidgetState.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDWidgetState : uint8 {
    None,
    Open,
    Run,
    Wait,
    WaitChanging,
    Run2,
    Close,
    Max,
};

