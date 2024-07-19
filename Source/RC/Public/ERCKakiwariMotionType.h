#pragma once
#include "CoreMinimal.h"
#include "ERCKakiwariMotionType.generated.h"

UENUM(BlueprintType)
enum class ERCKakiwariMotionType : uint8 {
    None,
    Idle,
    Sit,
    Walk,
};

