#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqEventFacialColorSectionFacialColorData.h"
#include "RCSeqEventFacialColorTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventFacialColorTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventFacialColorSectionFacialColorData FacialColorData;
    
public:
    RCSEQEVENT_API FRCSeqEventFacialColorTemplate();
};

