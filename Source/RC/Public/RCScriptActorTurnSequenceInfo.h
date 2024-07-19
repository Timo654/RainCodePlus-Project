#pragma once
#include "CoreMinimal.h"
#include "RCScriptActorTurnSequenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorTurnSequenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    RC_API FRCScriptActorTurnSequenceInfo();
};

