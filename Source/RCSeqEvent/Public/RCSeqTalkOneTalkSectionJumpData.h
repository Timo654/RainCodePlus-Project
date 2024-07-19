#pragma once
#include "CoreMinimal.h"
#include "ERCSeqTalkOneTalkSectionJumpCondition.h"
#include "RCSeqBaseJumpData.h"
#include "RCSeqTalkOneTalkSectionJumpData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqTalkOneTalkSectionJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSeqTalkOneTalkSectionJumpCondition JumpCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqBaseJumpData JumpData;
    
    RCSEQEVENT_API FRCSeqTalkOneTalkSectionJumpData();
};

