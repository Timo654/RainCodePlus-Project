#include "RCInputBFL.h"

URCInputBFL::URCInputBFL() {
}

void URCInputBFL::SetPressedDebug(ERCInputKeyType KyeType) {
}

void URCInputBFL::ResetInputMode() {
}

void URCInputBFL::PushInputMode(ERCInputMode InInputMode, FName InModeName) {
}

void URCInputBFL::PopInputMode(FName InModeName, bool InAllPop) {
}

bool URCInputBFL::IsRepeat(ERCInputKeyType KyeType) {
    return false;
}

bool URCInputBFL::IsReleased(ERCInputKeyType KyeType) {
    return false;
}

bool URCInputBFL::IsPressed(ERCInputKeyType KyeType) {
    return false;
}

bool URCInputBFL::IsMove(ERCInputKeyType KyeType) {
    return false;
}

bool URCInputBFL::IsDown(ERCInputKeyType KyeType) {
    return false;
}

bool URCInputBFL::IsDebugMenuTrigger() {
    return false;
}

bool URCInputBFL::IsDebugGameTimeUp() {
    return false;
}

bool URCInputBFL::IsDebugGameClear() {
    return false;
}

float URCInputBFL::GetPointerValue(ERCInputKeyType KyeType) {
    return 0.0f;
}

float URCInputBFL::GetPlayerMoveSide() {
    return 0.0f;
}

float URCInputBFL::GetPlayerMoveFront() {
    return 0.0f;
}

float URCInputBFL::GetLeverValue(ERCInputKeyType KyeType) {
    return 0.0f;
}

bool URCInputBFL::GetKey(FKey& OutKey, ERCInputButtonType OutKyeType, ERCInputKeyType KyeType, ERCInputHardwareType InInputHardwareType) {
    return false;
}

ERCInputPlatform URCInputBFL::GetInputPlatform() {
    return ERCInputPlatform::DualShock4;
}

bool URCInputBFL::GetFinaleCursolPointerInfo(ERCInputCursolInfoType& OutInputType, FVector2D& OutScreenPosition, FVector2D& OutMove) {
    return false;
}

bool URCInputBFL::GetDrawKey(FKey& OutKey, ERCInputButtonType OutKyeType, ERCInputKeyType KyeType) {
    return false;
}

bool URCInputBFL::GetCursolPointerInfo(ERCInputCursolInfoType& OutInputType, FVector2D& OutScreenPosition, FVector2D& OutMove, bool bInSurvey) {
    return false;
}

float URCInputBFL::GetCameraMoveZoon() {
    return 0.0f;
}

float URCInputBFL::GetCameraMoveYaw(bool bInSurvey) {
    return 0.0f;
}

float URCInputBFL::GetCameraMovePitch(bool bInSurvey) {
    return 0.0f;
}

float URCInputBFL::GetAmatanMoveTurn() {
    return 0.0f;
}

float URCInputBFL::GetAmatanMoveFront() {
    return 0.0f;
}

void URCInputBFL::ChangeInputMode(ERCInputMode InInputMode, FName InModeName) {
}


