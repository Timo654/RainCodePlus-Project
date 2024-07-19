#include "RCHUD.h"

ARCHUD::ARCHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bDrawHUDForDebug = true;
}

void ARCHUD::DebugToggleDrawHUD() {
}

void ARCHUD::DebugSetDrawHUD(bool in_bDraw) {
}

bool ARCHUD::DebugCheckDrawHUD() {
    return false;
}


