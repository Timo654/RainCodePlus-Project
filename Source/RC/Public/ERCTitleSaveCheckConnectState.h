#pragma once
#include "CoreMinimal.h"
#include "ERCTitleSaveCheckConnectState.generated.h"

UENUM(BlueprintType)
enum class ERCTitleSaveCheckConnectState : uint8 {
    PRE_CHECK_WINDOW,
    CHECK_WINDOW,
    PRE_ENABLE_SAVE_DATA_CHECK,
    ENABLE_SAVE_DATA_CHECK,
    PRE_LAST_INFO,
    LAST_INFO,
    FINISH,
    MAX,
};

