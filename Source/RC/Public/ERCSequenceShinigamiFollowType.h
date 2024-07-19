#pragma once
#include "CoreMinimal.h"
#include "ERCSequenceShinigamiFollowType.generated.h"

UENUM(BlueprintType)
enum class ERCSequenceShinigamiFollowType : uint8 {
    None,
    LocationOnly,
    LocationAndRotation,
    Transform,
    Max,
};

