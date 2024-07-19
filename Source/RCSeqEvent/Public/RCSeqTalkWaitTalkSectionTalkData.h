#pragma once
#include "CoreMinimal.h"
#include "RCSeqTalkWaitTalkSectionTalkData.generated.h"

USTRUCT(BlueprintType)
struct RCSEQEVENT_API FRCSeqTalkWaitTalkSectionTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkID;
    
    FRCSeqTalkWaitTalkSectionTalkData();
};

