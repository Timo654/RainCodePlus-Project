#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCEventTriggerSequencerComponent.generated.h"

class AActor;
class ALevelSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCEventTriggerSequencerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ParentActor;
    
public:
    URCEventTriggerSequencerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartSequencer();
    
    UFUNCTION(BlueprintCallable)
    bool ResetSequencer();
    
    UFUNCTION(BlueprintCallable)
    void Init(FName InEventTriggerName);
    
};

