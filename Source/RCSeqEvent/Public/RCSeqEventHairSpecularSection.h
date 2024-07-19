#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqEventHairSpecularSectionHairSpecularData.h"
#include "RCSeqEventHairSpecularSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqEventHairSpecularSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventHairSpecularSectionHairSpecularData HairSpecularData;
    
    URCSeqEventHairSpecularSection();

};

