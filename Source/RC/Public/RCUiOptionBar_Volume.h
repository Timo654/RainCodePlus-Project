#pragma once
#include "CoreMinimal.h"
#include "RCUiOptionBar.h"
#include "RCUiOptionBar_Volume.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionBar_Volume : public URCUiOptionBar {
    GENERATED_BODY()
public:
    URCUiOptionBar_Volume();

    UFUNCTION(BlueprintCallable)
    int32 SynchronizeToSlider(int32 ind);
    
};

