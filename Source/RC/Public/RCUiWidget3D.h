#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiWidget3D.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiWidget3D : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiWidget3D();

    UFUNCTION(BlueprintCallable)
    void WaitOutside();
    
};

