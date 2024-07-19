#pragma once
#include "CoreMinimal.h"
#include "ESAVELOADMENU_STATE.generated.h"

UENUM()
enum class ESAVELOADMENU_STATE : int32 {
    PRE_MODE_SELECT,
    MODE_SELECT,
    PRE_SAVE_SELECT,
    SAVE_SELECT,
    PRE_LOAD_SELECT,
    LOAD_SELECT,
    PRE_CHECK_CLOSE,
    CHECK_CLOSE,
    NONE,
};

