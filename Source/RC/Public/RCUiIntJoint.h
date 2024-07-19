#pragma once
#include "CoreMinimal.h"
#include "RCUiInteractIcon.h"
#include "RCUiIntJoint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiIntJoint : public URCUiInteractIcon {
    GENERATED_BODY()
public:
    URCUiIntJoint();

    UFUNCTION(BlueprintCallable)
    void SetDoorIcon();
    
    UFUNCTION(BlueprintCallable)
    void SetBusIcon();
    
};

