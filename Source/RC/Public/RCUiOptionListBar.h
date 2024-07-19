#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionListBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionListBar : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiOptionListBar();

    UFUNCTION(BlueprintCallable)
    void BarArrowButtonDownEvent();
    
};

