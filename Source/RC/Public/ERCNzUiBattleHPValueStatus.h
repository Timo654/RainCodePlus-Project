#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHPValueStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleHPValueStatus : uint8 {
    Stay,
    DamageAnim,
    RecoverAnim,
};

