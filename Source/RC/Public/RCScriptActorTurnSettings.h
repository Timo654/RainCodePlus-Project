#pragma once
#include "CoreMinimal.h"
#include "RCScriptActorTurnSequenceSettings.h"
#include "RCScriptActorTurnSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorTurnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurnEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnSequenceSettings Sequence0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnSequenceSettings Sequence1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnSequenceSettings Sequence2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateForAll;
    
    RC_API FRCScriptActorTurnSettings();
};

