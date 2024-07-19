#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePointerHoverType.generated.h"

UENUM(BlueprintType)
enum class EPuzzlePointerHoverType : uint8 {
    UnSelect,
    Word,
    Kaikagi,
    DragKaikagi,
    Hint,
    NotEat,
};

