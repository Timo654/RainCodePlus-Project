#include "RCLocalizeText3DActor.h"

ARCLocalizeText3DActor::ARCLocalizeText3DActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTextIdChanged = true;
}

void ARCLocalizeText3DActor::SetTextID(FName InTextID) {
}

FName ARCLocalizeText3DActor::GetTextID() {
    return NAME_None;
}


