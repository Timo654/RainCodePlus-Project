#include "RCCustomEventActor.h"

ARCCustomEventActor::ARCCustomEventActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FName ARCCustomEventActor::GetEventName() {
    return NAME_None;
}


