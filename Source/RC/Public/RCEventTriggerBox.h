#pragma once
#include "CoreMinimal.h"
#include "RCEventTrigger.h"
#include "RCEventTriggerBox.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCEventTriggerBox : public ARCEventTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
    ARCEventTriggerBox(const FObjectInitializer& ObjectInitializer);

};

