#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetInteractive.h"
#include "RCUiInteractTalk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiInteractTalk : public URCUiWidgetInteractive {
    GENERATED_BODY()
public:
    URCUiInteractTalk();

    UFUNCTION(BlueprintCallable)
    void SetTalkImg(bool bInIsNzWorld);
    
};

