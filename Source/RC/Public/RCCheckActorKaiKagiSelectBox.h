#pragma once
#include "CoreMinimal.h"
#include "RCCheckActorBox.h"
#include "RCCheckActorKaiKagiSelectBox.generated.h"

class URCCheckActorKaiKagiSelectComponent;

UCLASS(Blueprintable)
class RC_API ARCCheckActorKaiKagiSelectBox : public ARCCheckActorBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCheckActorKaiKagiSelectComponent* KaiKagiSelectComp;
    
public:
    ARCCheckActorKaiKagiSelectBox(const FObjectInitializer& ObjectInitializer);

};

