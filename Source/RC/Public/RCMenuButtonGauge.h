#pragma once
#include "CoreMinimal.h"
#include "RCMenuButton.h"
#include "RCMenuButtonGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuButtonGauge : public URCMenuButton {
    GENERATED_BODY()
public:
    URCMenuButtonGauge();

    UFUNCTION(BlueprintCallable)
    void OnIncValue();
    
    UFUNCTION(BlueprintCallable)
    void OnDecValue();
    
};

