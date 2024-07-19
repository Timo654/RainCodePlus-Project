#include "RCText3DActorBFL.h"

URCText3DActorBFL::URCText3DActorBFL() {
}

void URCText3DActorBFL::SetVisibility(FName InActorName, bool bInVisible, bool bDirect) {
}

void URCText3DActorBFL::SetTextID(FName InActorName, FName InTextID) {
}

bool URCText3DActorBFL::IsVisibility(FName InActorName) {
    return false;
}

FName URCText3DActorBFL::GetTextID(FName InActorName) {
    return NAME_None;
}

ARCText3DActor* URCText3DActorBFL::GetText3DActor(FName InActorName) {
    return NULL;
}

FText URCText3DActorBFL::GetText(FName InActorName) {
    return FText::GetEmpty();
}


