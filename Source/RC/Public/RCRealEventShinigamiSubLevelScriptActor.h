#pragma once
#include "CoreMinimal.h"
#include "RCRealEventShinigamiSubLevelScriptActorEventShinigamiDelegate.h"
#include "RCRealEventSubLevelScriptActor.h"
#include "RCRealEventShinigamiSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventShinigamiSubLevelScriptActor : public ARCRealEventSubLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventShinigamiSubLevelScriptActorEventShinigami OnEventShinigami;
    
    ARCRealEventShinigamiSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

