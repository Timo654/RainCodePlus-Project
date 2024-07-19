#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseTemplate.h"
#include "RCSeqEventHairSpecularSectionHairSpecularData.h"
#include "RCSeqEventHairSpecularTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventHairSpecularTemplate : public FRCSeqBaseTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventHairSpecularSectionHairSpecularData HairSpecularData;
    
public:
    RCSEQEVENT_API FRCSeqEventHairSpecularTemplate();
};

