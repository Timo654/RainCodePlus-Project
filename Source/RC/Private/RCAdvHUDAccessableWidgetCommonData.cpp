#include "RCAdvHUDAccessableWidgetCommonData.h"

FRCAdvHUDAccessableWidgetCommonData::FRCAdvHUDAccessableWidgetCommonData() {
    this->Type = ERCAdvHUDAccessableWidgetType::Invalid;
    this->Actor = NULL;
    this->Widget = NULL;
    this->WidgetAccessable = NULL;
    this->WidgetInteractive = NULL;
    this->bAccessable = false;
    this->bHiddenByTrace = false;
    this->Distance = 0.00f;
    this->bSetPosition = false;
    this->Priority = 0;
    this->bInViewport = false;
    this->bInScreen = false;
    this->bHiddenBySafeArea = false;
    this->State = ERCAdvHUDWidgetState::None;
    this->bSetData = false;
}

