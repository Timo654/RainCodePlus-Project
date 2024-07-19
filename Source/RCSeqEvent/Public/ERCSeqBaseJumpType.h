#pragma once
#include "CoreMinimal.h"
#include "ERCSeqBaseJumpType.generated.h"

UENUM(BlueprintType)
enum class ERCSeqBaseJumpType : uint8 {
    Label,
    Frame,
    Seconds,
    SectionEnd,
    Max,
};

