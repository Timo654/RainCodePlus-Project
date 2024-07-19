#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqEventEmissiveSectionEmissiveData.h"
#include "RCSeqEventEmissiveTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventEmissiveTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventEmissiveSectionEmissiveData EmissiveData;
    
public:
    RCSEQEVENT_API FRCSeqEventEmissiveTemplate();
};

