#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuCommonTab.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuCommonTab : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiMenuCommonTab();

    UFUNCTION(BlueprintCallable)
    void SetTabIconActive(int32 InActiveIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInputFromButtonGuide(ERCInputKeyType InType);
    
};

