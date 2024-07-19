#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqSubtitleSubtitleSectionJumpData.h"
#include "RCSeqSubtitleSubtitleSectionSubtitleData.h"
#include "RCSeqSubtitleSubtitleTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqSubtitleSubtitleTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleSubtitleSectionSubtitleData SubtitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleSubtitleSectionJumpData JumpData;
    
public:
    RCSEQEVENT_API FRCSeqSubtitleSubtitleTemplate();
};

