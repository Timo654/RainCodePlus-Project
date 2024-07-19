#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleDisturbLetter_NotifyDelegateDelegate.h"
#include "RCNazoBattleRebuttalLetter.h"
#include "RCNazoBattleDisturbLetter.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNazoBattleDisturbLetter : public ARCNazoBattleRebuttalLetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbAttackEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbAttackDisable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbSlashed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbRepelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetter_NotifyDelegate OnDisturbFinished;
    
    ARCNazoBattleDisturbLetter(const FObjectInitializer& ObjectInitializer);

};

