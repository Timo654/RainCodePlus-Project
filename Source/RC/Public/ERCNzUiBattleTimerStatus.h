#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleTimerStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleTimerStatus : uint8 {
    Idle,
    Run,
};

