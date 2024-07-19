#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqEventLightOffsetSectionOffsetData.h"
#include "RCSeqEventLightOffsetSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqEventLightOffsetSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLightOffsetSectionOffsetData LightOffsetData;
    
    URCSeqEventLightOffsetSection();

};

