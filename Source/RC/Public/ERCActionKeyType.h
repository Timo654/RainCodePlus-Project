#pragma once
#include "CoreMinimal.h"
#include "ERCActionKeyType.generated.h"

UENUM(BlueprintType)
enum class ERCActionKeyType : uint8 {
    AK_None,
    AK_LTop,
    AK_LRight,
    AK_LDown,
    AK_LLeft,
    AK_RTop,
    AK_RRight,
    AK_RDown,
    AK_RLeft,
    AK_Amatan,
};

