#pragma once
#include "CoreMinimal.h"
#include "ERCSeqSubtitleSubtitleSectionJumpCondition.h"
#include "RCSeqBaseJumpData.h"
#include "RCSeqSubtitleSubtitleSectionJumpData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqSubtitleSubtitleSectionJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSeqSubtitleSubtitleSectionJumpCondition JumpCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqBaseJumpData JumpData;
    
    RCSEQEVENT_API FRCSeqSubtitleSubtitleSectionJumpData();
};

