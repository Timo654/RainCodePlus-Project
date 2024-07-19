#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHPGaugeStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleHPGaugeStatus : uint8 {
    Idle,
    Show,
    Run,
    Hide,
    DamageAnim,
    DamageCountDown,
    RecoverAnim,
    RecoverCountUp,
};

