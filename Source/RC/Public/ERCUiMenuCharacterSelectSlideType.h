#pragma once
#include "CoreMinimal.h"
#include "ERCUiMenuCharacterSelectSlideType.generated.h"

UENUM(BlueprintType)
enum class ERCUiMenuCharacterSelectSlideType : uint8 {
    None,
    In_L,
    In_R,
    Out_L,
    Out_R,
};

