#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCPlatformUserReactProcessInterface.h"
#include "RCPlatformUserReactProcess.generated.h"

UCLASS(Blueprintable)
class RC_API URCPlatformUserReactProcess : public UObject, public IRCPlatformUserReactProcessInterface {
    GENERATED_BODY()
public:
    URCPlatformUserReactProcess();

private:
    UFUNCTION(BlueprintCallable)
    void OnSignOut();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishSignOutGenericWindow(bool bResult);
    

    // Fix for true pure virtual functions not being implemented
};

