#pragma once
#include "CoreMinimal.h"
#include "ERCRealEventMapConnectStatus.generated.h"

UENUM(BlueprintType)
enum class ERCRealEventMapConnectStatus : uint8 {
    None,
    Enable,
    Disable,
};

