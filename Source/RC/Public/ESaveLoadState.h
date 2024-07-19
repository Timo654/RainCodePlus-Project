#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadState.generated.h"

UENUM()
enum class ESaveLoadState : int32 {
    NONE,
    READY,
    CHECK_SAVE_LOAD_FINISH,
    MAKE_LIST,
    PRE_SELECT,
    SELECT,
    PRE_DIALOG,
    DIALOG,
    PRE_LOAD,
    LOAD_CHECK,
    PRE_SAVE,
    SAVE_CHECK,
    INSTALL_CHECK,
    FINISH_CHECK,
};

