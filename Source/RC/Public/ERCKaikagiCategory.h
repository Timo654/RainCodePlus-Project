#pragma once
#include "CoreMinimal.h"
#include "ERCKaikagiCategory.generated.h"

UENUM(BlueprintType)
enum class ERCKaikagiCategory : uint8 {
    KCEvidence,
    KCTestimony,
    KCFieldEvidence,
    KCInference,
    Max,
};

