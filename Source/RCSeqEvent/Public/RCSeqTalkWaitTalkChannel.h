#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "RCSeqTalkWaitTalkSectionTalkData.h"
#include "RCSeqTalkWaitTalkChannel.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqTalkWaitTalkChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSeqTalkWaitTalkSectionTalkData> KeyValues;
    
public:
    RCSEQEVENT_API FRCSeqTalkWaitTalkChannel();
};

