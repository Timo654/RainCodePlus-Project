#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqEventEmissiveSectionEmissiveData.h"
#include "RCSeqEventEmissiveSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqEventEmissiveSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventEmissiveSectionEmissiveData EmissiveData;
    
    URCSeqEventEmissiveSection();

};

