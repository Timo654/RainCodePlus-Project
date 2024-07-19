#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDResearchPointerMouse_ModeOffType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDResearchPointerMouse_ModeOffType : uint8 {
    DoNothing,
    MoveToNearMarker,
    MoveToLastSelectedMarker,
    Max,
};

