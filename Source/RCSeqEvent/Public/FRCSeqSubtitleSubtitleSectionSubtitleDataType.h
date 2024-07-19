#pragma once
#include "CoreMinimal.h"
#include "FRCSeqSubtitleSubtitleSectionSubtitleDataType.generated.h"

UENUM(BlueprintType)
enum class FRCSeqSubtitleSubtitleSectionSubtitleDataType : uint8 {
    DataTable,
    SubtitleID,
    Max,
};

