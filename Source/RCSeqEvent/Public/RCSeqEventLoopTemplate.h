#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "RCSeqEventLoopSectionCheckLoopData.h"
#include "RCSeqEventLoopSectionJumpData.h"
#include "RCSeqEventLoopTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventLoopTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLoopSectionCheckLoopData CheckLoopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLoopSectionJumpData JumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber RangeStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber RangeEndFrame;
    
public:
    RCSEQEVENT_API FRCSeqEventLoopTemplate();
};

