#pragma once
#include "CoreMinimal.h"
#include "ERCOptionWindowMode.generated.h"

UENUM(BlueprintType)
enum class ERCOptionWindowMode : uint8 {
    FullScreen,
    BorderlessWindow,
    Window,
};

