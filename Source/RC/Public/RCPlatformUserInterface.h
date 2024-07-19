#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ERCLoginStatus.h"
#include "RCPlatformUserRequestUserPrivilegeCallbackDelegate.h"
#include "RCPlatformUserInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class RC_API URCPlatformUserInterface : public UInterface {
    GENERATED_BODY()
};

class RC_API IRCPlatformUserInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RequestGetUserPrivilege(const FRCPlatformUserRequestUserPrivilegeCallback& callbackFunc) PURE_VIRTUAL(RequestGetUserPrivilege,);
    
    UFUNCTION(BlueprintCallable)
    virtual FName GetPlatformUserName() PURE_VIRTUAL(GetPlatformUserName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    virtual ERCLoginStatus GetLoginStatus() PURE_VIRTUAL(GetLoginStatus, return ERCLoginStatus::NotLoggedIn;);
    
};

