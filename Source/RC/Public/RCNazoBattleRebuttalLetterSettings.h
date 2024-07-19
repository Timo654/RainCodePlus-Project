#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleRebuttalLetterType.h"
#include "RCNazoBattleRebuttalLetterAppearSettings.h"
#include "RCNazoBattleRebuttalLetterMoveSettings.h"
#include "RCNazoBattleRebuttalLetterReadySettings.h"
#include "RCNazoBattleRebuttalLetterRollingStartSettings.h"
#include "RCNazoBattleRebuttalLetterStaySettings.h"
#include "RCNazoBattleRebuttalLetterSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleRebuttalLetterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoBattleRebuttalLetterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecorationFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkillEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinueCountBecomeNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuriedShadowAlphaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleRebuttalLetterReadySettings ReadySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleRebuttalLetterAppearSettings AppearSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleRebuttalLetterRollingStartSettings RollingStartSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleRebuttalLetterStaySettings StaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleRebuttalLetterMoveSettings MoveSettings;
    
    RC_API FRCNazoBattleRebuttalLetterSettings();
};

