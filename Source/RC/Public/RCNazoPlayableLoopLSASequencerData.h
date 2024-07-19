#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ERCNazoPlayableLoopLSASequencerState.h"
#include "RCNazoPlayableLoopLSASequencerData.generated.h"

class ALevelSequenceActor;
class ARCNazoPlayableLoopSequenceParentActor;

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSASequencerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNazoPlayableLoopSequenceParentActor* SequenceParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoPlayableLoopLSASequencerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayTimerHandle;
    
    RC_API FRCNazoPlayableLoopLSASequencerData();
};

