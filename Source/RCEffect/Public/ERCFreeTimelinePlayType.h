#pragma once
#include "CoreMinimal.h"
#include "ERCFreeTimelinePlayType.generated.h"

UENUM(BlueprintType)
enum class ERCFreeTimelinePlayType : uint8 {
    None,
    Play,
    PlayLP,
    PlayOT,
    Stop,
};

