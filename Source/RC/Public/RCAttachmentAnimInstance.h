#pragma once
#include "CoreMinimal.h"
#include "RCAnimInstance.h"
#include "RCAttachmentMotionSlotData.h"
#include "RCAttachmentAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API URCAttachmentAnimInstance : public URCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAttachmentMotionSlotData SlotData;
    
    URCAttachmentAnimInstance();

};

