#pragma once
#include "CoreMinimal.h"
#include "EWallType.generated.h"

UENUM(BlueprintType)
enum class EWallType : uint8 {
    NORMAL,
    KAIKAGI,
    THORN,
    ROCK,
    ROCK_R,
    ROCK_L,
    FENCE,
    START,
    LOOP,
    KAIZIN,
    TUTORIAL,
    FORT,
};

