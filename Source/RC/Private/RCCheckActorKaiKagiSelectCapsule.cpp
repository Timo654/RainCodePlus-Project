#include "RCCheckActorKaiKagiSelectCapsule.h"
#include "RCCheckActorKaiKagiSelectComponent.h"

ARCCheckActorKaiKagiSelectCapsule::ARCCheckActorKaiKagiSelectCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KaiKagiSelectComp = CreateDefaultSubobject<URCCheckActorKaiKagiSelectComponent>(TEXT("KaiKagiSelectComp"));
}


