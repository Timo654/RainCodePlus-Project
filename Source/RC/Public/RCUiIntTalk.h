#pragma once
#include "CoreMinimal.h"
#include "RCUiInteractIcon.h"
#include "RCUiIntTalk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiIntTalk : public URCUiInteractIcon {
    GENERATED_BODY()
public:
    URCUiIntTalk();

    UFUNCTION(BlueprintCallable)
    void SetTalkImg(bool bInIsNzWorld);
    
};

