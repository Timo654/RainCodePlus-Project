#pragma once
#include "CoreMinimal.h"
#include "EWallAlignmentType.generated.h"

UENUM(BlueprintType)
enum class EWallAlignmentType : uint8 {
    Center,
    Left,
    Right,
};

