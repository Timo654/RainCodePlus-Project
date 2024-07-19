#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCSeqEventLightSectionRotatorOffsetData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventLightSectionRotatorOffsetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Offset;
    
    RCSEQEVENT_API FRCSeqEventLightSectionRotatorOffsetData();
};

