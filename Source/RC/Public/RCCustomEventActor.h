#pragma once
#include "CoreMinimal.h"
#include "RCBgActor.h"
#include "RCCustomEventActorEventDelegate.h"
#include "RCCustomEventActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCustomEventActor : public ARCBgActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCustomEventActorEvent OnEvent;
    
    ARCCustomEventActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FName GetEventName();
    
};

