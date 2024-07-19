#pragma once
#include "CoreMinimal.h"
#include "ERCTitleMenuState.generated.h"

UENUM(BlueprintType)
enum class ERCTitleMenuState : uint8 {
    PRE_CHECK_FRONT_LIST,
    CHECK_FRONT_LIST,
    PRE_CHECK_BACK_LIST,
    CHECK_BACK_LIST,
    PRE_NEW_GAME,
    NEW_GAME,
    PRE_CONTINUE,
    CONTINUE,
    PRE_FINISH_CHECK,
    FINISH_CHECK,
    WAITING,
    PRE_SUBSTORY_DIALOG,
    SUBSTORY_DIALOG,
    MAX,
};

