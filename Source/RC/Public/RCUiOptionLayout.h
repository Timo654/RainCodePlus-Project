#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionLayout.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionLayout : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiOptionLayout();

    UFUNCTION(BlueprintCallable)
    void OnButtonGuideSelectKey(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideOptionEnter(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideInitializeKey(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideInitializeBar(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideClose(ERCInputKeyType KeyType);
    
};

