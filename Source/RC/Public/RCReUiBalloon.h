#pragma once
#include "CoreMinimal.h"
#include "ESCBaloonFrame.h"
#include "ESCBaloonType.h"
#include "RCUiWidgetAccessable.h"
#include "RCReUiBalloon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiBalloon : public URCUiWidgetAccessable {
    GENERATED_BODY()
public:
    URCReUiBalloon();

    UFUNCTION(BlueprintCallable)
    void SetBalloonData(ESCBaloonFrame InFrame, ESCBaloonType InIcon, const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    void Reduce();
    
    UFUNCTION(BlueprintCallable)
    void OpenSmall();
    
    UFUNCTION(BlueprintCallable)
    void OpenLarge();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBalloon();
    
    UFUNCTION(BlueprintCallable)
    void Enlarge();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

