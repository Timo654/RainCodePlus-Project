#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ERCAutoPlayCompletionPred.h"
#include "RCAutoPlayNodeOutputPin2_CompletedDelegate.h"
#include "RCAutoPlayNodeOutputPin2_TickDelegate.h"
#include "RCAutoPlayActor.generated.h"

class ARCAutoPlayActor;
class UObject;

UCLASS(Blueprintable)
class RC_API ARCAutoPlayActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAutoPlayNodeOutputPin2_Tick TickPin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAutoPlayNodeOutputPin2_Completed CompletedPin;
    
    ARCAutoPlayActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARCAutoPlayActor* AutoPlayActor2(const UObject* WorldContextObject, AActor* Target, const FVector& InDistPos, const FRotator& InDistRot, float Duration, bool IgnoreZ, ERCAutoPlayCompletionPred Completion);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARCAutoPlayActor* AutoPlayActor(const UObject* WorldContextObject, AActor* Target, AActor* Dist, float Duration, bool IgnoreZ, ERCAutoPlayCompletionPred Completion);
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

