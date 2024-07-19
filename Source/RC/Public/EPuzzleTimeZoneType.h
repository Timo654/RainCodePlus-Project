#pragma once
#include "CoreMinimal.h"
#include "EPuzzleTimeZoneType.generated.h"

UENUM(BlueprintType)
enum class EPuzzleTimeZoneType : uint8 {
    MORNING,
    EVENING,
    NIGHT,
};

