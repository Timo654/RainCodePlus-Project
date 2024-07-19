#pragma once
#include "CoreMinimal.h"
#include "FRCSeqTalkWaitTalkSectionTalkDataType.generated.h"

UENUM(BlueprintType)
enum class FRCSeqTalkWaitTalkSectionTalkDataType : uint8 {
    DataTable,
    TalkID,
    Max,
};

