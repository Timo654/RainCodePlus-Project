#pragma once
#include "CoreMinimal.h"
#include "ERCActionFailureReason.generated.h"

UENUM(BlueprintType)
enum class ERCActionFailureReason : uint8 {
    AF_None,
    AF_Deadline,
    AF_Mistype,
};

