#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERCLoginStatus.h"
#include "RCPlatformUserInterface.h"
#include "RCPlatformUserRequestUserPrivilegeCallbackDelegate.h"
#include "RCPlatformUserGeneric.generated.h"

UCLASS(Blueprintable)
class RC_API URCPlatformUserGeneric : public UObject, public IRCPlatformUserInterface {
    GENERATED_BODY()
public:
    URCPlatformUserGeneric();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void RequestGetUserPrivilege(const FRCPlatformUserRequestUserPrivilegeCallback& callbackFunc) override PURE_VIRTUAL(RequestGetUserPrivilege,);
    
    UFUNCTION(BlueprintCallable)
    FName GetPlatformUserName() override PURE_VIRTUAL(GetPlatformUserName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    ERCLoginStatus GetLoginStatus() override PURE_VIRTUAL(GetLoginStatus, return ERCLoginStatus::NotLoggedIn;);
    
};

