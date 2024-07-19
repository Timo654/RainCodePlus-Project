#pragma once
#include "CoreMinimal.h"
#include "ERCSelectTextSelectStatus.generated.h"

UENUM(BlueprintType)
enum class ERCSelectTextSelectStatus : uint8 {
    Non,
    Normal,
    Select,
    NonSelect,
};

