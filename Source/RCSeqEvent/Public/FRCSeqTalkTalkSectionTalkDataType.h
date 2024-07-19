#pragma once
#include "CoreMinimal.h"
#include "FRCSeqTalkTalkSectionTalkDataType.generated.h"

UENUM(BlueprintType)
enum class FRCSeqTalkTalkSectionTalkDataType : uint8 {
    DataTable,
    TalkID,
    Max,
};

