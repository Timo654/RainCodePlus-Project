#pragma once
#include "CoreMinimal.h"
#include "ERCForceFeedBackLoadStatus.generated.h"

UENUM(BlueprintType)
enum class ERCForceFeedBackLoadStatus : uint8 {
    None,
    LoadStart,
    Loading,
    LoadEnd,
};

