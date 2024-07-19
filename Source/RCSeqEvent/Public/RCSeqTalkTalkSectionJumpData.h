#pragma once
#include "CoreMinimal.h"
#include "ERCSeqTalkTalkSectionJumpCondition.h"
#include "RCSeqBaseJumpData.h"
#include "RCSeqTalkTalkSectionJumpData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqTalkTalkSectionJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSeqTalkTalkSectionJumpCondition JumpCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqBaseJumpData JumpData;
    
    RCSEQEVENT_API FRCSeqTalkTalkSectionJumpData();
};

