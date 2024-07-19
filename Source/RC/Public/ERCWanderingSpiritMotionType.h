#pragma once
#include "CoreMinimal.h"
#include "ERCWanderingSpiritMotionType.generated.h"

UENUM(BlueprintType)
enum class ERCWanderingSpiritMotionType : uint8 {
    Idle,
    UpDown,
    FrontBack,
    Kunekune,
    Kaiten,
    GuruguruBar,
};

