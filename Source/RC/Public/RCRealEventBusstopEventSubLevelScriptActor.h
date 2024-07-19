#pragma once
#include "CoreMinimal.h"
#include "RCRealEventCheckSubLevelScriptActorBusInDelegate.h"
#include "RCRealEventCheckSubLevelScriptActorBusOutDelegate.h"
#include "RCRealEventSubLevelScriptActor.h"
#include "RCRealEventBusstopEventSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventBusstopEventSubLevelScriptActor : public ARCRealEventSubLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEvent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventCheckSubLevelScriptActorBusIn OnEventBusIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventCheckSubLevelScriptActorBusOut OnEventBusOut;
    
    ARCRealEventBusstopEventSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEndEvent();
    
};

