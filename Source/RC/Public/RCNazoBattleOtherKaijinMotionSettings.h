#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleMotionSettings.h"
#include "RCNazoBattleOtherKaijinMotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleOtherKaijinMotionSettings : public FRCNazoBattleMotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovePositionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionDelayTime;
    
    RC_API FRCNazoBattleOtherKaijinMotionSettings();
};

