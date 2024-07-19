#pragma once
#include "CoreMinimal.h"
#include "ERCInputLeverType.generated.h"

UENUM(BlueprintType)
enum class ERCInputLeverType : uint8 {
    PlayerMoveFront,
    PlayerMoveSide,
    CameraPitch,
    CameraRoll,
    CameraZoom,
    MenuScroll,
    Max,
};

