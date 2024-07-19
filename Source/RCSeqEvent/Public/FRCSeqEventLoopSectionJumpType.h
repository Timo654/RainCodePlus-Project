#pragma once
#include "CoreMinimal.h"
#include "FRCSeqEventLoopSectionJumpType.generated.h"

UENUM(BlueprintType)
enum class FRCSeqEventLoopSectionJumpType : uint8 {
    Time,
    Frame,
    Max,
};

