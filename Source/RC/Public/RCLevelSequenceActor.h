#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "RCLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SrquencerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopStartRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopEndRate;
    
public:
    ARCLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void FinishedEvent();
    
};

