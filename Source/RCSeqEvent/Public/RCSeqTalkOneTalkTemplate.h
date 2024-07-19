#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqTalkOneTalkSectionJumpData.h"
#include "RCSeqTalkOneTalkSectionTalkData2.h"
#include "RCSeqTalkOneTalkTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqTalkOneTalkTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkOneTalkSectionTalkData2 TalkData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkOneTalkSectionJumpData JumpData;
    
public:
    RCSEQEVENT_API FRCSeqTalkOneTalkTemplate();
};

