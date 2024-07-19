#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHPGaugeMode.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleHPGaugeMode : uint8 {
    Normal,
    AutoDamage,
    AutoRecover,
};

