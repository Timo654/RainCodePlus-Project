#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqSubtitleOneSubtitleSectionJumpData.h"
#include "RCSeqSubtitleOneSubtitleSectionSubtitleData2.h"
#include "RCSeqSubtitleOneSubtitleTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqSubtitleOneSubtitleTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleOneSubtitleSectionSubtitleData2 SubtitleData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleOneSubtitleSectionJumpData JumpData;
    
public:
    RCSEQEVENT_API FRCSeqSubtitleOneSubtitleTemplate();
};

