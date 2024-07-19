#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadMode.generated.h"

UENUM()
enum class ESaveLoadMode : int32 {
    SAVE,
    LOAD,
    TITLE_RETURN,
    MAX,
    NONE,
    CANCEL,
};

