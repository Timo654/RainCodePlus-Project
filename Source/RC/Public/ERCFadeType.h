#pragma once
#include "CoreMinimal.h"
#include "ERCFadeType.generated.h"

UENUM(BlueprintType)
enum class ERCFadeType : uint8 {
    Normal,
    Ui,
    UiLoading,
};

