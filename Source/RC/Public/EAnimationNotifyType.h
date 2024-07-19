#pragma once
#include "CoreMinimal.h"
#include "EAnimationNotifyType.generated.h"

UENUM(BlueprintType)
enum class EAnimationNotifyType : uint8 {
    Invalid,
    Start,
    End,
    IsRightFoot,
    IsLeftFoot,
};

