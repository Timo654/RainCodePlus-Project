#pragma once
#include "CoreMinimal.h"
#include "URCTitleSubStoryState.generated.h"

UENUM(BlueprintType)
enum class URCTitleSubStoryState : uint8 {
    PRE_SELECT,
    SELECT,
    PRE_SAVECHECK,
    SAVECHECK,
    SAVECHECK_ERROR,
    PRE_DIALOG,
    DIALOG,
    PRE_CONFIRM,
    CONFIRM,
    CONTINUE,
    WAIT,
    MAX,
};

