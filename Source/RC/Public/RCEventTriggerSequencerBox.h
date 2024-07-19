#pragma once
#include "CoreMinimal.h"
#include "RCEventTriggerBox.h"
#include "RCEventTriggerSequencerBox.generated.h"

class AActor;
class URCEventTriggerSequencerComponent;

UCLASS(Blueprintable)
class RC_API ARCEventTriggerSequencerBox : public ARCEventTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCEventTriggerSequencerComponent* SequencerComp;
    
public:
    ARCEventTriggerSequencerBox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ResetSequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnWarpToLast();
    
    UFUNCTION(BlueprintCallable)
    void OnWarpEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnWarp();
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapPlayerEntry(AActor* OverlappedActor, AActor* OtherActor);
    
};

