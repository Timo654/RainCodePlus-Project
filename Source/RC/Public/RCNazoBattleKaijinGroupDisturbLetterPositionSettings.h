#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCNazoBattleKaijinGroupDisturbLetterPositionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleKaijinGroupDisturbLetterPositionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightPosition;
    
    RC_API FRCNazoBattleKaijinGroupDisturbLetterPositionSettings();
};

