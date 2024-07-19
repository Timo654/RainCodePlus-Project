#include "RCAdvHUDBalloonSetData.h"

FRCAdvHUDBalloonSetData::FRCAdvHUDBalloonSetData() {
    this->Pawn = NULL;
    this->BalloonFrameType = ESCBaloonFrame::None;
    this->BalloonContentType = ESCBaloonType::None;
    this->bBalloonDraw = false;
    this->bTextDraw = false;
    this->Scale3D = 0.00f;
}

