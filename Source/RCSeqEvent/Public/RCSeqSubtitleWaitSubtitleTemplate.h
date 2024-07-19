#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqSubtitleWaitSubtitleSectionSubtitleData.h"
#include "RCSeqSubtitleWaitSubtitleTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqSubtitleWaitSubtitleTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSeqSubtitleWaitSubtitleSectionSubtitleData> KeySubtitleDatas;
    
public:
    RCSEQEVENT_API FRCSeqSubtitleWaitSubtitleTemplate();
};

