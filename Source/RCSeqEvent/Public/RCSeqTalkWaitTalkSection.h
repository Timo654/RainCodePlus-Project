#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqTalkWaitTalkChannel.h"
#include "RCSeqTalkWaitTalkSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqTalkWaitTalkSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkWaitTalkChannel WaitTalkChannel;
    
    URCSeqTalkWaitTalkSection();

};

