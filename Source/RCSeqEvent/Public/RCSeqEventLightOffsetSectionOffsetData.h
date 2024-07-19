#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCSeqEventLightOffsetSectionOffsetData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventLightOffsetSectionOffsetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotatorOffset;
    
    RCSEQEVENT_API FRCSeqEventLightOffsetSectionOffsetData();
};

