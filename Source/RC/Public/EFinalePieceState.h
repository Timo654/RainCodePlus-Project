#pragma once
#include "CoreMinimal.h"
#include "EFinalePieceState.generated.h"

UENUM(BlueprintType)
enum class EFinalePieceState : uint8 {
    UnSelect,
    Select,
    Done,
    None,
};

