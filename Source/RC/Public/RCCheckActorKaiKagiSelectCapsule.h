#pragma once
#include "CoreMinimal.h"
#include "RCCheckActorCapsule.h"
#include "RCCheckActorKaiKagiSelectCapsule.generated.h"

class URCCheckActorKaiKagiSelectComponent;

UCLASS(Blueprintable)
class RC_API ARCCheckActorKaiKagiSelectCapsule : public ARCCheckActorCapsule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCheckActorKaiKagiSelectComponent* KaiKagiSelectComp;
    
public:
    ARCCheckActorKaiKagiSelectCapsule(const FObjectInitializer& ObjectInitializer);

};

