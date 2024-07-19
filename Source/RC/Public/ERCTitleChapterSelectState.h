#pragma once
#include "CoreMinimal.h"
#include "ERCTitleChapterSelectState.generated.h"

UENUM(BlueprintType)
enum class ERCTitleChapterSelectState : uint8 {
    PRE_SELECT,
    SELECT,
    PRE_SELECT_DIALOG,
    SELECT_DIALOG,
    FINISH_CHECK,
    FINISHED,
    PRE_INSTALL_DIALOG,
    INSTALL_DIALOG,
    MAX,
};

