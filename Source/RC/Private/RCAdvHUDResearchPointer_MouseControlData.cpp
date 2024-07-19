#include "RCAdvHUDResearchPointer_MouseControlData.h"

FRCAdvHUDResearchPointer_MouseControlData::FRCAdvHUDResearchPointer_MouseControlData() {
    this->bEnable = false;
    this->MouseMode = ERCAdvHUDResearchPointerMouse_Mode::Off;
    this->KeyInputType = ERCAdvHUDResearchPointerMouse_InputType::Move;
    this->ModeOffType = ERCAdvHUDResearchPointerMouse_ModeOffType::DoNothing;
}

