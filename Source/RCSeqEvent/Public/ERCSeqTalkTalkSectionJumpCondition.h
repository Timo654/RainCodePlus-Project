#pragma once
#include "CoreMinimal.h"
#include "ERCSeqTalkTalkSectionJumpCondition.generated.h"

UENUM(BlueprintType)
enum class ERCSeqTalkTalkSectionJumpCondition : uint8 {
    NotJump,
    NotEndSection,
    Max,
};

