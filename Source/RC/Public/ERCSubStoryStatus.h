#pragma once
#include "CoreMinimal.h"
#include "ERCSubStoryStatus.generated.h"

UENUM(BlueprintType)
enum class ERCSubStoryStatus : uint8 {
    Clear,
    Close,
    Going,
    None,
};

