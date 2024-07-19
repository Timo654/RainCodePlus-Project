#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleKaijinGroupDisturbLetterPositionSettings.h"
#include "RCNazoBattleKaijinGroupDisturbLetterLaneSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleKaijinGroupDisturbLetterLaneSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleKaijinGroupDisturbLetterPositionSettings TopSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleKaijinGroupDisturbLetterPositionSettings MiddleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleKaijinGroupDisturbLetterPositionSettings BottomSettings;
    
    RC_API FRCNazoBattleKaijinGroupDisturbLetterLaneSettings();
};

