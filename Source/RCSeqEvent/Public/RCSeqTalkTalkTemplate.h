#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqTalkTalkSectionJumpData.h"
#include "RCSeqTalkTalkSectionTalkData.h"
#include "RCSeqTalkTalkTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqTalkTalkTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkTalkSectionTalkData TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkTalkSectionJumpData JumpData;
    
public:
    RCSEQEVENT_API FRCSeqTalkTalkTemplate();
};

