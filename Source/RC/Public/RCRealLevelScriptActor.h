#pragma once
#include "CoreMinimal.h"
#include "ERCGameMode.h"
#include "ERCLSADefautCameraStatus.h"
#include "RCBgLevelScriptActor.h"
#include "RCRealLevelScriptActorEventNextLevelDelegate.h"
#include "RCRealLevelScriptActor.generated.h"

class ARCRealEventBusstopEventSubLevelScriptActor;
class ARCRealEventBusstopSubLevelScriptActor;
class ARCRealEventCheckSubLevelScriptActor;
class ARCRealEventMapMoveSubLevelScriptActor;
class ARCRealEventResearchExitSubLevelScriptActor;
class ARCRealEventShinigamiSubLevelScriptActor;
class ARCRealEventSubLevelScriptActor;
class ARCRealEventTalkSubLevelScriptActor;
class ARCTPSCamera;

UCLASS(Blueprintable)
class RC_API ARCRealLevelScriptActor : public ARCBgLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCTPSCamera* TpsCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCLSADefautCameraStatus TpsCameraStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventSubLevelScriptActor*> EventSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventTalkSubLevelScriptActor*> EventTalkSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventCheckSubLevelScriptActor*> EventCheckSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventShinigamiSubLevelScriptActor*> EventShinigamiSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventResearchExitSubLevelScriptActor*> EventResearchExitSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventMapMoveSubLevelScriptActor*> EventMapMoveSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventBusstopSubLevelScriptActor*> EventBusstopSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCRealEventBusstopEventSubLevelScriptActor*> EventBusstopEventSubLevelScriptActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapMoveTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCGameMode NextGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubLevelLoadSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubLevelLoadingWait;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealLevelScriptActorEventNextLevel OnEventNextLevel;
    
    ARCRealLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ERCGameMode GetNextGameMode();
    
};

