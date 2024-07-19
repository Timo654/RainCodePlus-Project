#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleRebuttalLetterRollingStartSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleRebuttalLetterRollingStartSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRollingStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RollingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRollingLeft;
    
    RC_API FRCNazoBattleRebuttalLetterRollingStartSettings();
};

