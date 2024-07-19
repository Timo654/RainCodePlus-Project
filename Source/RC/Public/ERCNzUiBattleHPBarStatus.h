#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHPBarStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleHPBarStatus : uint8 {
    Stay,
    DamageAnim,
    RecoverAnim,
};

