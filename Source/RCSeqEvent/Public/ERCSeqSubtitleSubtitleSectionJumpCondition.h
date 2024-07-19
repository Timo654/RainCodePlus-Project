#pragma once
#include "CoreMinimal.h"
#include "ERCSeqSubtitleSubtitleSectionJumpCondition.generated.h"

UENUM(BlueprintType)
enum class ERCSeqSubtitleSubtitleSectionJumpCondition : uint8 {
    NotJump,
    NotEndSection,
    Max,
};

