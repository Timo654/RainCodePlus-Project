#pragma once
#include "CoreMinimal.h"
#include "ERCEffectType.generated.h"

UENUM(BlueprintType)
enum class ERCEffectType : uint8 {
    Invalid,
    Particle,
    Niagara,
    EffectSequence,
    Max,
};

