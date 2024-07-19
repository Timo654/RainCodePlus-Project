#pragma once
#include "CoreMinimal.h"
#include "ERCOptionWindowMode.h"
#include "RCUiOptionBar.h"
#include "RCUiOptionBar_Choice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionBar_Choice : public URCUiOptionBar {
    GENERATED_BODY()
public:
    URCUiOptionBar_Choice();

    UFUNCTION(BlueprintCallable)
    void OnWindowModeChangeEvent(ERCOptionWindowMode Mode, int32 dispNum);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxValueChangedEvent(int32 ind);
    
};

