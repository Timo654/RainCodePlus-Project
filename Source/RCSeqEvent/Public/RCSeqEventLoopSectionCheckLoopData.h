#pragma once
#include "CoreMinimal.h"
#include "FRCSeqEventLoopSectionLoopType.h"
#include "RCSeqEventLoopSectionCheckLoopData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventLoopSectionCheckLoopData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLoopSectionLoopType LoopType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakLoop;
    
    RCSEQEVENT_API FRCSeqEventLoopSectionCheckLoopData();
};

