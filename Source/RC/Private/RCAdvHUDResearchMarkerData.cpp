#include "RCAdvHUDResearchMarkerData.h"

FRCAdvHUDResearchMarkerData::FRCAdvHUDResearchMarkerData() {
    this->bDraw = false;
    this->bNameDraw = false;
    this->bSetNamePosition = false;
    this->bMoveName = false;
    this->bResearched = false;
    this->bMarkerInViewport = false;
    this->State3D = ERCAdvHUDWidgetState::None;
    this->Scale3D = 0.00f;
    this->Radius = 0.00f;
    this->bDetail = false;
}

