#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqSubtitleSubtitleSectionJumpData.h"
#include "RCSeqSubtitleSubtitleSectionSubtitleData.h"
#include "RCSeqSubtitleSubtitleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqSubtitleSubtitleSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleSubtitleSectionSubtitleData SubtitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleSubtitleSectionJumpData JumpData;
    
    URCSeqSubtitleSubtitleSection();

};

