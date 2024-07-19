#pragma once
#include "CoreMinimal.h"
#include "ERCInputCursolInfoType.generated.h"

UENUM(BlueprintType)
enum class ERCInputCursolInfoType : uint8 {
    None,
    ScreenPosition,
    Move,
};

