#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleLSAKaijinJumpState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleLSAKaijinJumpState : uint8 {
    None,
    Ready,
    Rising,
    Falling,
    Landing,
    Max,
};

