#pragma once
#include "CoreMinimal.h"
#include "ERCAmatanPuzzleFailureCode.generated.h"

UENUM(BlueprintType)
enum class ERCAmatanPuzzleFailureCode : uint8 {
    APFailure_None,
    APFailure_Misstep,
    APFailure_OutOfPuzzle,
    APFailure_Return,
};

