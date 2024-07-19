#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDCutInType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDCutInType : uint8 {
    Normal,
    Text,
    Anim,
    FullScreen,
    Max,
};

