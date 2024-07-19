#pragma once
#include "CoreMinimal.h"
#include "ERCSeqTalkOneTalkSectionJumpCondition.generated.h"

UENUM(BlueprintType)
enum class ERCSeqTalkOneTalkSectionJumpCondition : uint8 {
    NotJump,
    SkipVoice,
    NotEndSection,
    Max,
};

