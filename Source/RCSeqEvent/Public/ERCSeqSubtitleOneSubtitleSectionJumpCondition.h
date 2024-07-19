#pragma once
#include "CoreMinimal.h"
#include "ERCSeqSubtitleOneSubtitleSectionJumpCondition.generated.h"

UENUM(BlueprintType)
enum class ERCSeqSubtitleOneSubtitleSectionJumpCondition : uint8 {
    NotJump,
    NotEndSection,
    Max,
};

