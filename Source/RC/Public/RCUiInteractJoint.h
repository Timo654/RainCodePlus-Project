#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetInteractive.h"
#include "RCUiInteractJoint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiInteractJoint : public URCUiWidgetInteractive {
    GENERATED_BODY()
public:
    URCUiInteractJoint();

    UFUNCTION(BlueprintCallable)
    void SetDoorIcon();
    
    UFUNCTION(BlueprintCallable)
    void SetBusIcon();
    
};

