#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqEventFacialColorSectionFacialColorData.h"
#include "RCSeqEventFacialColorSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqEventFacialColorSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventFacialColorSectionFacialColorData FacialColorData;
    
    URCSeqEventFacialColorSection();

};

