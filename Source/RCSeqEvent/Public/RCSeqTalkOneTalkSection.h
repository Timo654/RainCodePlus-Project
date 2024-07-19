#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqTalkOneTalkSectionJumpData.h"
#include "RCSeqTalkOneTalkSectionTalkData2.h"
#include "RCSeqTalkOneTalkSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqTalkOneTalkSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkOneTalkSectionTalkData2 TalkData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkOneTalkSectionJumpData JumpData;
    
    URCSeqTalkOneTalkSection();

};

