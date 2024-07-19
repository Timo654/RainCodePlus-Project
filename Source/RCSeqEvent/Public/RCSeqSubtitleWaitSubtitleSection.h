#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqSubtitleWaitSubtitleChannel.h"
#include "RCSeqSubtitleWaitSubtitleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqSubtitleWaitSubtitleSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleWaitSubtitleChannel WaitSubtitleChannel;
    
    URCSeqSubtitleWaitSubtitleSection();

};

