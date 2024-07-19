#pragma once
#include "CoreMinimal.h"
#include "RCScriptActorTurnSequenceSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorTurnSequenceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    RC_API FRCScriptActorTurnSequenceSettings();
};

