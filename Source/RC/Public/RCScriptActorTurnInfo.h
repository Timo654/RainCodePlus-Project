#pragma once
#include "CoreMinimal.h"
#include "RCScriptActorTurnSequenceInfo.h"
#include "RCScriptActorTurnInfo.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorTurnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnSequenceInfo Sequence0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnSequenceInfo Sequence1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnSequenceInfo Sequence2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateForAll;
    
    RC_API FRCScriptActorTurnInfo();
};

