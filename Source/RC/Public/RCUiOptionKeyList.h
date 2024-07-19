#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionKeyList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionKeyList : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiOptionKeyList();

    UFUNCTION(BlueprintCallable)
    bool OnPagerSetClickEvent(int32 ind, const FPointerEvent& InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeButtonClick();
    
};

