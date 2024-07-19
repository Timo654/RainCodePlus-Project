#pragma once
#include "CoreMinimal.h"
#include "ESCFadeColor.generated.h"

UENUM(BlueprintType)
enum class ESCFadeColor : uint8 {
    Non,
    Black,
    White,
    Red,
    Max,
};

