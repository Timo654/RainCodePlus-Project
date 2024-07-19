#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionBarVolume.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionBarVolume : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiOptionBarVolume();

    UFUNCTION(BlueprintCallable)
    void SynchronizeToSlider(float Value);
    
};

