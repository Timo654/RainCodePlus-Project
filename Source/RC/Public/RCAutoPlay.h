#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ERCAutoPlayCompletionPred.h"
#include "RCAutoPlayNodeOutputPin2_CompletedDelegate.h"
#include "RCAutoPlayNodeOutputPin2_TickDelegate.h"
#include "RCAutoPlay.generated.h"

class AActor;
class UObject;
class URCAutoPlay;

UCLASS(Blueprintable)
class RC_API URCAutoPlay : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAutoPlayNodeOutputPin2_Tick Tick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAutoPlayNodeOutputPin2_Completed Completed;
    
    URCAutoPlay();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URCAutoPlay* AutoPlay(const UObject* WorldContextObject, AActor* Target, AActor* Dist, float Duration, bool IgnoreZ, ERCAutoPlayCompletionPred Completion);
    
};

