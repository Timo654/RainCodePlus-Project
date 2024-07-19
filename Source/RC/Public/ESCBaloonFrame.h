#pragma once
#include "CoreMinimal.h"
#include "ESCBaloonFrame.generated.h"

UENUM(BlueprintType)
enum class ESCBaloonFrame : uint8 {
    None,
    Normal,
    Shout,
    Max,
};

