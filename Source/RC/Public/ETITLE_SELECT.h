#pragma once
#include "CoreMinimal.h"
#include "ETITLE_SELECT.generated.h"

UENUM()
enum class ETITLE_SELECT : int32 {
    NEWGAME,
    LOADGAME,
    WALK_THROUGH,
    MAX,
    NONE,
};

