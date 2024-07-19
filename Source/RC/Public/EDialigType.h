#pragma once
#include "CoreMinimal.h"
#include "EDialigType.generated.h"

UENUM()
enum class EDialigType : int32 {
    STORY_PLAY,
    STORY_REAL,
    STORY_NAZO,
    OPEN_NG,
    UPDATE_HINT,
    NONE,
};

