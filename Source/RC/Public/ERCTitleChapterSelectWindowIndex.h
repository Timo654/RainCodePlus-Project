#pragma once
#include "CoreMinimal.h"
#include "ERCTitleChapterSelectWindowIndex.generated.h"

UENUM(BlueprintType)
enum class ERCTitleChapterSelectWindowIndex : uint8 {
    REAL_START,
    NAZO_START,
    NAZO_RESULT,
    RETURN,
};

