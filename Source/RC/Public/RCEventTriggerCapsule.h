#pragma once
#include "CoreMinimal.h"
#include "RCEventTrigger.h"
#include "RCEventTriggerCapsule.generated.h"

class UCapsuleComponent;
class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCEventTriggerCapsule : public ARCEventTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    ARCEventTriggerCapsule(const FObjectInitializer& ObjectInitializer);

};

