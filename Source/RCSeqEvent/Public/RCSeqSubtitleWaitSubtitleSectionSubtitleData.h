#pragma once
#include "CoreMinimal.h"
#include "RCSeqSubtitleWaitSubtitleSectionSubtitleData.generated.h"

USTRUCT(BlueprintType)
struct RCSEQEVENT_API FRCSeqSubtitleWaitSubtitleSectionSubtitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubTitleID;
    
    FRCSeqSubtitleWaitSubtitleSectionSubtitleData();
};

