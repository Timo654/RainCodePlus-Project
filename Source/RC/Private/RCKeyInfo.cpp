#include "RCKeyInfo.h"

URCKeyInfo::URCKeyInfo() {
    this->Index = -1;
    this->AnyKeys = false;
    this->bPressed = false;
    this->bReleased = false;
    this->bDown = false;
    this->bRepeat = false;
    this->RepeatWait = 0.00f;
    this->bMove = false;
    this->Value = 0.00f;
    this->OldValue = 0.00f;
    this->PointerValue = 0.00f;
    this->InputButtonType = ERCInputButtonType::Button;
    this->InputHardwareType = ERCInputHardwareType::Pad1;
    this->bDebugPressed = false;
}


