#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionPager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionPager : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiOptionPager();

    UFUNCTION(BlueprintCallable)
    void OnButtonGuideClickEvent(ERCInputKeyType Key);
    
};

