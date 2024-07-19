#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleKaijinGroupDisturbSettings.h"
#include "RCNazoBattleKaijinGroupRebuttalSettings.h"
#include "RCNazoBattleKaijinSettings.h"
#include "RCNazoBattleKaijinGroupSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleKaijinGroupSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoBattleKaijinSettings> KaijinArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleKaijinGroupRebuttalSettings RebuttalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleKaijinGroupDisturbSettings DisturbSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFacePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreEventPartVoiceKaijinTag;
    
    RC_API FRCNazoBattleKaijinGroupSettings();
};

