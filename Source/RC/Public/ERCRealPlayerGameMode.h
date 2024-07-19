#pragma once
#include "CoreMinimal.h"
#include "ERCRealPlayerGameMode.generated.h"

UENUM(BlueprintType)
enum class ERCRealPlayerGameMode : uint8 {
    FreeMove,
    Research,
    Research2nd,
    ResearchVision,
    SpotSelect,
    Reproduction,
};

