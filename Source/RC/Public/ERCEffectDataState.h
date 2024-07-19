#pragma once
#include "CoreMinimal.h"
#include "ERCEffectDataState.generated.h"

UENUM(BlueprintType)
enum class ERCEffectDataState : uint8 {
    Invalid,
    SetData,
    Loading,
    Loaded,
    Max,
};

