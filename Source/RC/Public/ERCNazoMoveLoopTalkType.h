#pragma once
#include "CoreMinimal.h"
#include "ERCNazoMoveLoopTalkType.generated.h"

UENUM(BlueprintType)
enum class ERCNazoMoveLoopTalkType : uint8 {
    None,
    Talk,
    Subtitle,
    Max,
};

