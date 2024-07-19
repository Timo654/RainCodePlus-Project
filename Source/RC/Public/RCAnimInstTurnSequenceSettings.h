#pragma once
#include "CoreMinimal.h"
#include "RCAnimInstTurnSequenceSettings.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct RC_API FRCAnimInstTurnSequenceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SequenceL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SequenceR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    FRCAnimInstTurnSequenceSettings();
};

