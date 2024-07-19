#pragma once
#include "CoreMinimal.h"
#include "RCUiInteractIcon.h"
#include "RCUiIntTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiIntTarget : public URCUiInteractIcon {
    GENERATED_BODY()
public:
    URCUiIntTarget();

    UFUNCTION(BlueprintCallable)
    void SetTargetImg(bool bInIsNzWorld);
    
};

