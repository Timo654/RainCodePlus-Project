#pragma once
#include "CoreMinimal.h"
#include "ERCGameMenuStatus.generated.h"

UENUM(BlueprintType)
enum class ERCGameMenuStatus : uint8 {
    Enable,
    Disable,
    Hidden,
};

