#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleRebuttalLetterAppearSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleRebuttalLetterAppearSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppearEffect;
    
    RC_API FRCNazoBattleRebuttalLetterAppearSettings();
};

