#pragma once
#include "CoreMinimal.h"
#include "ERCMobRequestMotionType.generated.h"

UENUM(BlueprintType)
enum class ERCMobRequestMotionType : uint8 {
    None,
    Idle,
    Walk,
    Run,
};

