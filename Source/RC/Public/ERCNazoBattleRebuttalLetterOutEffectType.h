#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleRebuttalLetterOutEffectType.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleRebuttalLetterOutEffectType : uint8 {
    None,
    SlashedAndOut,
    SlashedButEndure,
    HitPlayer,
    HitPlayerButUnrival,
    AttackedByAssist,
    HitKaijin,
    Max,
};

