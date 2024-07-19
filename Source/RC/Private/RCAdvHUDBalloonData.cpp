#include "RCAdvHUDBalloonData.h"

FRCAdvHUDBalloonData::FRCAdvHUDBalloonData() {
    this->BalloonFrameType = ESCBaloonFrame::None;
    this->BalloonContentType = ESCBaloonType::None;
    this->bBalloonDraw = false;
    this->bTextDraw = false;
    this->bFarInViewport = false;
    this->State3D = ERCAdvHUDWidgetState::None;
    this->bStateLarge = false;
    this->Scale3D = 0.00f;
}

