#pragma once
#include "CoreMinimal.h"
#include "RCRealEventResearch2ndExitSubLevelScriptActorEventTalkDelegate.h"
#include "RCRealEventResearchExitSubLevelScriptActorEventTalkDelegate.h"
#include "RCRealEventResearchVisionCgabgeSubLevelScriptActorEventTalkDelegate.h"
#include "RCRealEventResearchVisionExitSubLevelScriptActorEventTalkDelegate.h"
#include "RCRealEventSubLevelScriptActor.h"
#include "RCRealEventResearchExitSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventResearchExitSubLevelScriptActor : public ARCRealEventSubLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventResearchExitSubLevelScriptActorEventTalk OnEventResearchExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventResearch2ndExitSubLevelScriptActorEventTalk OnEventResearch2ndExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventResearchVisionExitSubLevelScriptActorEventTalk OnEventResearchVisionExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventResearchVisionCgabgeSubLevelScriptActorEventTalk OnEventResearchVisionChange;
    
    ARCRealEventResearchExitSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

