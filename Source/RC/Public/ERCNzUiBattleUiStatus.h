#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleUiStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleUiStatus : uint8 {
    Idle,
    Show,
    Run,
    Hide,
};

