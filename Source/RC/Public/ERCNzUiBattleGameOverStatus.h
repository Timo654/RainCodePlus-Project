#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleGameOverStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleGameOverStatus : uint8 {
    Idle,
    Show,
    Run,
    Wait,
    Check,
    Hide,
};

