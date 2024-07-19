#pragma once
#include "CoreMinimal.h"
#include "EEvaluationTitleState.generated.h"

UENUM()
enum class EEvaluationTitleState : int32 {
    INITIALIZE,
    SELECT,
    SELECTED,
    CHANGE_SCENE,
    FINISH_CHECK,
    CHECK_FINISH_SAVELOAD,
    PRE_CHECK_FINISH_SAVELOAD,
    NONE,
};

