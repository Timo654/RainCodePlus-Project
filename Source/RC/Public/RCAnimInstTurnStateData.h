#pragma once
#include "CoreMinimal.h"
#include "RCAnimInstTurnStateSequenceData.h"
#include "RCScriptActorTurnData.h"
#include "RCAnimInstTurnStateData.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCAnimInstTurnStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnData TurnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAnimInstTurnStateSequenceData SequenceData0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAnimInstTurnStateSequenceData SequenceData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAnimInstTurnStateSequenceData SequenceData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartState;
    
    FRCAnimInstTurnStateData();
};

