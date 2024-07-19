#pragma once
#include "CoreMinimal.h"
#include "RCStartupWidget.h"
#include "RCStartupAutoSave.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCStartupAutoSave : public URCStartupWidget {
    GENERATED_BODY()
public:
    URCStartupAutoSave();

private:
    UFUNCTION(BlueprintCallable)
    void SaveIconFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsHyoukaban();
    
};

