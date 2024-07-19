#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleKaijinPartVoiceType.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleKaijinPartVoiceType : uint8 {
    PreEvent,
    AttackSuccess,
    ClearEvent,
    Max,
};

