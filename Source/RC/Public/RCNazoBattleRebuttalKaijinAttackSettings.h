#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleMotionSettings.h"
#include "RCNazoBattleRebuttalKaijinAttackSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleRebuttalKaijinAttackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleMotionSettings Motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackSocketName;
    
    RC_API FRCNazoBattleRebuttalKaijinAttackSettings();
};

