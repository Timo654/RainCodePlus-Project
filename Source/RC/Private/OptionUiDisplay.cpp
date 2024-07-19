#include "OptionUiDisplay.h"

FOptionUiDisplay::FOptionUiDisplay() {
    this->TextLanguage = ERCTextLanguage::None;
    this->MessageTextSpeed = 0;
    this->SubTitlesDraw = ERCCommonSwitch::On;
    this->BattleSubTitlesDraw = ERCCommonSwitch::On;
    this->MinimapDraw = ERCCommonSwitch::On;
    this->MinimapNorthFixed = ERCOptionMinimapRotate::Fixed;
    this->UiQuality = ERCOptionUiQuality::UiQualit4K;
}

