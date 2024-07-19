#pragma once
#include "CoreMinimal.h"
#include "ERCSeqSubtitleOneSubtitleSectionJumpCondition.h"
#include "RCSeqBaseJumpData.h"
#include "RCSeqSubtitleOneSubtitleSectionJumpData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqSubtitleOneSubtitleSectionJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSeqSubtitleOneSubtitleSectionJumpCondition JumpCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqBaseJumpData JumpData;
    
    RCSEQEVENT_API FRCSeqSubtitleOneSubtitleSectionJumpData();
};

