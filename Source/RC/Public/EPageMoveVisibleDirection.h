#pragma once
#include "CoreMinimal.h"
#include "EPageMoveVisibleDirection.generated.h"

UENUM(BlueprintType)
enum class EPageMoveVisibleDirection : uint8 {
    None,
    LR,
    L,
    R,
};

