#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqTalkTalkSectionJumpData.h"
#include "RCSeqTalkTalkSectionTalkData.h"
#include "RCSeqTalkTalkSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqTalkTalkSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkTalkSectionTalkData TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkTalkSectionJumpData JumpData;
    
    URCSeqTalkTalkSection();

};

