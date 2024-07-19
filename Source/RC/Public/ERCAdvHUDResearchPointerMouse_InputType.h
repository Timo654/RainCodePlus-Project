#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDResearchPointerMouse_InputType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDResearchPointerMouse_InputType : uint8 {
    Move,
    MouseNotMove,
    DoNothing,
    Max,
};

