#include "OptionController.h"

FOptionController::FOptionController() {
    this->InputPlatform = ERCInputPlatform::DualShock4;
    this->InputPlatformChange = ERCCommonSwitch::On;
    this->InputEnterType = ERCInputEnterType::Down;
    this->Vibration = ERCCommonSwitch::On;
    this->CameraAutoMovePlayerBack = ERCCommonSwitch::On;
    this->CameraAutoMoveSpeed = 0.00f;
    this->CameraYawReverse = ERCOptionCameraReverse::Normal;
    this->CameraPinchReverse = ERCOptionCameraReverse::Normal;
    this->CameraSpeed = 0;
}

