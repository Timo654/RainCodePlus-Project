#pragma once
#include "CoreMinimal.h"
#include "FRCSeqSubtitleWaitSubtitleSectionSubtitleDataType.generated.h"

UENUM(BlueprintType)
enum class FRCSeqSubtitleWaitSubtitleSectionSubtitleDataType : uint8 {
    DataTable,
    SubtitleID,
    Max,
};

