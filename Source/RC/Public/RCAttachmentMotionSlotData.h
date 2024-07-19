#pragma once
#include "CoreMinimal.h"
#include "RCAttachmentMotionSlotData.generated.h"

USTRUCT(BlueprintType)
struct FRCAttachmentMotionSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCase01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCase02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCase03;
    
    RC_API FRCAttachmentMotionSlotData();
};

