#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleMotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleMotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionBlendTime;
    
    RC_API FRCNazoBattleMotionSettings();
};

