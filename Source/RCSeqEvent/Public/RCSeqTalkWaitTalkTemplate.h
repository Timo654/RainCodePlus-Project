#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqTalkWaitTalkSectionTalkData.h"
#include "RCSeqTalkWaitTalkTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqTalkWaitTalkTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSeqTalkWaitTalkSectionTalkData> KeyTalkDatas;
    
public:
    RCSEQEVENT_API FRCSeqTalkWaitTalkTemplate();
};

