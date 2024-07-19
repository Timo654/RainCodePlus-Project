#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCActorCollisionPrisetInfo.h"
#include "RCActorLevelLoadEndDelegate.h"
#include "RCActorLevelUnloadStartDelegate.h"
#include "RCActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCActorCollisionPrisetInfo> CollisonPrisetList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActorLevelLoadEnd OnLevelLoadEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActorLevelUnloadStart OnLevelUnLoadEnd;
    
    ARCActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bInVisible, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseCancelFlag(bool bInPauseCancel);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bInPause, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool IsPauseCancelFlag();
    
    UFUNCTION(BlueprintCallable)
    bool IsPause();
    
    UFUNCTION(BlueprintCallable)
    FName GetActorName();
    
};

