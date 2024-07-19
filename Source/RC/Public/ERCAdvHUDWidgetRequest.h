#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDWidgetRequest.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDWidgetRequest : uint8 {
    None,
    Open,
    Close,
    Reopen,
    Max,
};

