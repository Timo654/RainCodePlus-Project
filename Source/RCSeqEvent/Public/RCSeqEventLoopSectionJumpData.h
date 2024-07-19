#pragma once
#include "CoreMinimal.h"
#include "FRCSeqEventLoopSectionJumpType.h"
#include "RCSeqEventLoopSectionJumpData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventLoopSectionJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLoopSectionJumpType JumpType;
    
    RCSEQEVENT_API FRCSeqEventLoopSectionJumpData();
};

