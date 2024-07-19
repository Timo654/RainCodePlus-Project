#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHintStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleHintStatus : uint8 {
    Idle,
    Show,
    Run,
    Hide,
};

