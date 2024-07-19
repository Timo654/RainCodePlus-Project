#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleOtherKaijinMotionSettings.h"
#include "RCNazoBattleLSARebuttalOtherKaijinData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleLSARebuttalOtherKaijinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleOtherKaijinMotionSettings MotionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyMotionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionStart;
    
    RC_API FRCNazoBattleLSARebuttalOtherKaijinData();
};

