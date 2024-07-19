#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqEventLightOffsetSectionOffsetData.h"
#include "RCSeqEventLightOffsetTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventLightOffsetTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLightOffsetSectionOffsetData LightOffsetData;
    
public:
    RCSEQEVENT_API FRCSeqEventLightOffsetTemplate();
};

