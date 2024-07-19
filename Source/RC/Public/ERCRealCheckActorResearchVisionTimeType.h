#pragma once
#include "CoreMinimal.h"
#include "ERCRealCheckActorResearchVisionTimeType.generated.h"

UENUM(BlueprintType)
enum class ERCRealCheckActorResearchVisionTimeType : uint8 {
    All,
    Present,
    Past,
};

