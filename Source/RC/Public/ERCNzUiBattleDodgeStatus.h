#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleDodgeStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleDodgeStatus : uint8 {
    Idle,
    Show,
    Run,
    Hide,
};

