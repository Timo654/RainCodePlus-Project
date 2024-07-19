#pragma once
#include "CoreMinimal.h"
#include "ETitleLanguageState.generated.h"

UENUM(BlueprintType)
enum class ETitleLanguageState : uint8 {
    PRE_SELECT,
    SELECT,
    PRE_DIALOG,
    DIALOG,
    PRE_FINISH,
    FINISH,
    MAX,
};

