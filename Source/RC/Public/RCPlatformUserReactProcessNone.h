#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCPlatformUserReactProcessInterface.h"
#include "RCPlatformUserReactProcessNone.generated.h"

UCLASS(Blueprintable)
class RC_API URCPlatformUserReactProcessNone : public UObject, public IRCPlatformUserReactProcessInterface {
    GENERATED_BODY()
public:
    URCPlatformUserReactProcessNone();


    // Fix for true pure virtual functions not being implemented
};

