#include "RCWanderingSpiritAnimInstance.h"

URCWanderingSpiritAnimInstance::URCWanderingSpiritAnimInstance() {
    this->AnimMode = ERCWanderingSpiritMotionType::Idle;
}

bool URCWanderingSpiritAnimInstance::StartOutPart(bool bStart) {
    return false;
}

bool URCWanderingSpiritAnimInstance::StartLoopPart(bool bStart) {
    return false;
}

bool URCWanderingSpiritAnimInstance::StartInPart(bool bStart) {
    return false;
}

void URCWanderingSpiritAnimInstance::SetMotionPart(ERCWanderingSpiritMotionPart part) {
}

bool URCWanderingSpiritAnimInstance::SetLoopFlag(bool flag) {
    return false;
}

bool URCWanderingSpiritAnimInstance::GetLoopFlag() const {
    return false;
}


