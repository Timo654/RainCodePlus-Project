#include "RCInputManager.h"

URCInputManager::URCInputManager() {
    this->PlayerController = NULL;
    this->BackDeltaTime = 0.00f;
    this->InputPlatform = ERCInputPlatform::XBoxController;
    this->InputHardwareDrawType = ERCInputHardwareDrawType::Keyboard;
    this->bMouseMoveCkeck = false;
    this->AnyKeysPadList.AddDefaulted(10);
    this->AnyKeysKeyboardList.AddDefaulted(9);
    this->InputMode = ERCInputMode::Game;
    this->bDrawMouseCursol = false;
}


