#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadSelectState.generated.h"

UENUM()
enum class ESaveLoadSelectState : int32 {
    NONE,
    PRE_SELECT,
    SELECT,
    PRE_CHECK_DIALOG,
    CHECK_DIALOG,
    PRE_PUSH_ANIMATION,
    PUSH_ANIMATION,
    PRE_CHECK_FINISH,
    CHECK_FINISH,
};

