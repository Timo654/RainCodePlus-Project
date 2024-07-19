#pragma once
#include "CoreMinimal.h"
#include "ERCOptionFramerateCap.generated.h"

UENUM(BlueprintType)
enum class ERCOptionFramerateCap : uint8 {
    Non,
    Cap120,
    Cap60,
    Cap30,
    Cap20,
    Cap15,
    Cap10,
};

