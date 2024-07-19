#pragma once
#include "CoreMinimal.h"
#include "ERCSequenceTalkJumpCondition.generated.h"

UENUM(BlueprintType)
enum class ERCSequenceTalkJumpCondition : uint8 {
    NotJump,
    SkipVoice,
    Max,
};

