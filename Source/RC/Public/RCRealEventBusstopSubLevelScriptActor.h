#pragma once
#include "CoreMinimal.h"
#include "RCRealEventCheckSubLevelScriptActorBusstopDelegate.h"
#include "RCRealEventCheckSubLevelScriptActorBusstopDisableDelegate.h"
#include "RCRealEventSubLevelScriptActor.h"
#include "RCRealEventBusstopSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventBusstopSubLevelScriptActor : public ARCRealEventSubLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventThrough;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventCheckSubLevelScriptActorBusstop OnEventBusstop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventCheckSubLevelScriptActorBusstopDisable OnEventBusstopDisable;
    
    ARCRealEventBusstopSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

