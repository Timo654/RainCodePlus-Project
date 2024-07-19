#pragma once
#include "CoreMinimal.h"
#include "ERCDollyCamPlane.generated.h"

UENUM(BlueprintType)
enum class ERCDollyCamPlane : uint8 {
    Dolly_None,
    Dolly_XZ,
    Dolly_XY,
    Dolly_YZ,
};

