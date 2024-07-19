#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleRebuttalLetterAssets.h"
#include "RCNazoBattleDisturbLetterAssets.generated.h"

class UCurveVector;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FRCNazoBattleDisturbLetterAssets : public FRCNazoBattleRebuttalLetterAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* HitShakeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitEndureEffect;
    
    RC_API FRCNazoBattleDisturbLetterAssets();
};

