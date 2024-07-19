#include "RCCheckActorKaiKagiSelectBox.h"
#include "RCCheckActorKaiKagiSelectComponent.h"

ARCCheckActorKaiKagiSelectBox::ARCCheckActorKaiKagiSelectBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KaiKagiSelectComp = CreateDefaultSubobject<URCCheckActorKaiKagiSelectComponent>(TEXT("KaiKagiSelectComp"));
}


