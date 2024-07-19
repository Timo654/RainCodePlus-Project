#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCSubLevelLoad.generated.h"

UCLASS(Blueprintable)
class RC_API URCSubLevelLoad : public UObject {
    GENERATED_BODY()
public:
    URCSubLevelLoad();

private:
    UFUNCTION(BlueprintCallable)
    void ExecSubLevelUnloadFinishChecker();
    
    UFUNCTION(BlueprintCallable)
    void ExecSubLevelLoadFinishChecker();
    
};

