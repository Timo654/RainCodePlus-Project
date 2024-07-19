#pragma once
#include "CoreMinimal.h"
#include "RCRealEventCheckSubLevelScriptActorMapMoveDelegate.h"
#include "RCRealEventCheckSubLevelScriptActorMapMoveStopDelegate.h"
#include "RCRealEventSubLevelScriptActor.h"
#include "RCRealEventMapMoveSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventMapMoveSubLevelScriptActor : public ARCRealEventSubLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapMoveTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventThrough;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventCheckSubLevelScriptActorMapMove OnEventMapMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventCheckSubLevelScriptActorMapMoveStop OnEventMapMoveStop;
    
    ARCRealEventMapMoveSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEventThrough();
    
    UFUNCTION(BlueprintCallable)
    bool IsEventThrough();
    
    UFUNCTION(BlueprintCallable)
    FName GetMapMoveTriggerName();
    
    UFUNCTION(BlueprintCallable)
    void ClearEventThrough();
    
};

