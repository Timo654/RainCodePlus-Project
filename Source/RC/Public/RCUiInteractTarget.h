#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetInteractive.h"
#include "RCUiInteractTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiInteractTarget : public URCUiWidgetInteractive {
    GENERATED_BODY()
public:
    URCUiInteractTarget();

    UFUNCTION(BlueprintCallable)
    void SetTargetImg(bool bInIsNzWorld);
    
};

