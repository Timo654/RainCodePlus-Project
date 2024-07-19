#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleAssistStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleAssistStatus : uint8 {
    Idle,
    Show,
    Run,
    Hide,
};

