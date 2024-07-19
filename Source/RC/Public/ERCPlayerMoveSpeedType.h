#pragma once
#include "CoreMinimal.h"
#include "ERCPlayerMoveSpeedType.generated.h"

UENUM(BlueprintType)
enum class ERCPlayerMoveSpeedType : uint8 {
    Run,
    Walk,
    Train,
    Yoromeki,
};

