#pragma once
#include "CoreMinimal.h"
#include "ERCRealEventMapConnectStatus.h"
#include "RCEventTrigger.h"
#include "RCMapMoveEventTrigger.generated.h"

UCLASS(Blueprintable)
class RC_API ARCMapMoveEventTrigger : public ARCEventTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCRealEventMapConnectStatus MoveConnectStatus;
    
public:
    ARCMapMoveEventTrigger(const FObjectInitializer& ObjectInitializer);

};

