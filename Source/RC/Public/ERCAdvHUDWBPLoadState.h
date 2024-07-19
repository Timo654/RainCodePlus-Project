#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDWBPLoadState.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDWBPLoadState : uint8 {
    None,
    Loading,
    Loaded,
    Max,
};

