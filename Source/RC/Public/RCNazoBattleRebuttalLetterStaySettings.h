#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleRebuttalLetterStaySettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleRebuttalLetterStaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchDelayTime;
    
    RC_API FRCNazoBattleRebuttalLetterStaySettings();
};

