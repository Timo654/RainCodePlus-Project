#pragma once
#include "CoreMinimal.h"
#include "ERCSequenceShinigamiFollowTarget.generated.h"

UENUM(BlueprintType)
enum class ERCSequenceShinigamiFollowTarget : uint8 {
    Player,
    Actor,
    Max,
};

