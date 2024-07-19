#pragma once
#include "CoreMinimal.h"
#include "RCCheckActor.h"
#include "RCCheckActorCapsule.generated.h"

class UCapsuleComponent;
class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCCheckActorCapsule : public ARCCheckActor {
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
    ARCCheckActorCapsule(const FObjectInitializer& ObjectInitializer);

};

