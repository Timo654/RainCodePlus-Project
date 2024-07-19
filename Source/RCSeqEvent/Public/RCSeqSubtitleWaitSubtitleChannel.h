#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "RCSeqSubtitleWaitSubtitleSectionSubtitleData.h"
#include "RCSeqSubtitleWaitSubtitleChannel.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqSubtitleWaitSubtitleChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSeqSubtitleWaitSubtitleSectionSubtitleData> KeyValues;
    
public:
    RCSEQEVENT_API FRCSeqSubtitleWaitSubtitleChannel();
};

