#pragma once
#include "CoreMinimal.h"
#include "FRCSeqSubtitleOneSubtitleSectionCloseType.generated.h"

UENUM(BlueprintType)
enum class FRCSeqSubtitleOneSubtitleSectionCloseType : uint8 {
    NotClose,
    AtDelayEnd,
    AtSectionEnd,
    Max,
};

