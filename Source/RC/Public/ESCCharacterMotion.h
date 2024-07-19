#pragma once
#include "CoreMinimal.h"
#include "ESCCharacterMotion.generated.h"

UENUM(BlueprintType)
enum class ESCCharacterMotion : uint8 {
    Wait,
    Walk,
    Run,
    Jump,
    Smile,
    Whine,
    Max,
};

