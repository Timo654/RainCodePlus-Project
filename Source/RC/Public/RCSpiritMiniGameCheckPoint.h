#pragma once
#include "CoreMinimal.h"
#include "ERCSpiritMiniGameCheckPointType.h"
#include "RCEventTrigger.h"
#include "RCSpiritMiniGameCheckPoint.generated.h"

class ARCSpiritMiniGameManager;

UCLASS(Blueprintable)
class RC_API ARCSpiritMiniGameCheckPoint : public ARCEventTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSpiritMiniGameCheckPointType CheckPointType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCSpiritMiniGameManager* SpiritMiniGameManager;
    
public:
    ARCSpiritMiniGameCheckPoint(const FObjectInitializer& ObjectInitializer);

};

