#pragma once
#include "CoreMinimal.h"
#include "ERCSpiritMiniGameCheckPointType.h"
#include "RCActor.h"
#include "RCWanderingSpiritHitData.h"
#include "RCSpiritMiniGameManager.generated.h"

class AActor;
class ARCSpiritMiniGameCheckPoint;

UCLASS(Blueprintable)
class RC_API ARCSpiritMiniGameManager : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpiritNiagaraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpiritNiagaraActorFollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSpiritMiniGameCheckPointType CurrentCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCSpiritMiniGameCheckPoint*> CheckPointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitWanderingSpirit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCWanderingSpiritHitData HitData;
    
public:
    ARCSpiritMiniGameManager(const FObjectInitializer& ObjectInitializer);

};

