#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionBarComboBoxItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionBarComboBoxItem : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiOptionBarComboBoxItem();

    UFUNCTION(BlueprintCallable)
    void OnButtonClickEvent();
    
};

