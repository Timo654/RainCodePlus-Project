#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleInteractIconQBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleInteractIconQBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCNzUiFinaleInteractIconQBase();

    UFUNCTION(BlueprintCallable)
    void PlayWait();
    
    UFUNCTION(BlueprintCallable)
    void PlayStart();
    
    UFUNCTION(BlueprintCallable)
    void PlayInCorrect();
    
    UFUNCTION(BlueprintCallable)
    void PlayHide();
    
    UFUNCTION(BlueprintCallable)
    void PlayFinish();
    
    UFUNCTION(BlueprintCallable)
    void PlayCorrect();
    
};

