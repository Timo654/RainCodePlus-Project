#pragma once
#include "CoreMinimal.h"
#include "ERCEnvironmentChangeSpeedType.generated.h"

UENUM(BlueprintType)
enum class ERCEnvironmentChangeSpeedType : uint8 {
    None,
    Run,
    Walk,
    Train,
    Yoromeki,
};

