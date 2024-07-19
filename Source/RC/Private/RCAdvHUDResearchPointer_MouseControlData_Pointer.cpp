#include "RCAdvHUDResearchPointer_MouseControlData_Pointer.h"

FRCAdvHUDResearchPointer_MouseControlData_Pointer::FRCAdvHUDResearchPointer_MouseControlData_Pointer() {
    this->bFreeMove = false;
    this->FreeMoveRate = 0.00f;
    this->bFreeMoveMultiplyByViewportScale = false;
    this->TimeToTurnMouseOffForFreeMove = 0.00f;
    this->Radius = 0.00f;
    this->RadiusScaleWhenTouching = 0.00f;
    this->RadiusScaleWhenLeaving = 0.00f;
    this->bCompletelyOnScreen = false;
    this->bAdhereToMarker = false;
    this->bDrawPointerCircle = false;
    this->bDrawPointerLimit = false;
}

