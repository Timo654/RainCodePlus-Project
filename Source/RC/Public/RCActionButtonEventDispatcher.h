#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERCActionFailureReason.h"
#include "RCActionButtonActivateEventDispatcherDelegate.h"
#include "RCActionButtonDeactivateEventDispatcherDelegate.h"
#include "RCActionButtonDeadlineEventDispatcherDelegate.h"
#include "RCActionButtonFailedEventDispatcherDelegate.h"
#include "RCActionButtonPassedEventDispatcherDelegate.h"
#include "RCActionButtonPendingEventDispatcherDelegate.h"
#include "RCActionButtonEventDispatcher.generated.h"

class ARCActionButton;

UCLASS(Blueprintable)
class RC_API ARCActionButtonEventDispatcher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActionButtonPassedEventDispatcher PassedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActionButtonFailedEventDispatcher FailedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActionButtonPendingEventDispatcher PendingDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActionButtonDeadlineEventDispatcher Dispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActionButtonActivateEventDispatcher ActivateDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCActionButtonDeactivateEventDispatcher DeactivateDispatcher;
    
    ARCActionButtonEventDispatcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CallOnPending(FName ID, ARCActionButton* Actor, int32 Times);
    
    UFUNCTION(BlueprintCallable)
    void CallOnPassed(FName ID, ARCActionButton* Actor);
    
    UFUNCTION(BlueprintCallable)
    void CallOnFailed(FName ID, ARCActionButton* Actor, ERCActionFailureReason reason);
    
    UFUNCTION(BlueprintCallable)
    void CallOnDeadline();
    
    UFUNCTION(BlueprintCallable)
    void CallOnDeactivate(FName ID, ARCActionButton* Actor);
    
    UFUNCTION(BlueprintCallable)
    void CallOnActivate(FName ID, ARCActionButton* Actor);
    
};

