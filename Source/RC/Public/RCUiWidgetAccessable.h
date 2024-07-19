#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiWidgetAccessable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiWidgetAccessable : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiWidgetAccessable();

    UFUNCTION(BlueprintCallable)
    void WaitOutside();
    
    UFUNCTION(BlueprintCallable)
    void ShowButton(bool bInIsShowable);
    
    UFUNCTION(BlueprintCallable)
    void PushButton();
    
};

