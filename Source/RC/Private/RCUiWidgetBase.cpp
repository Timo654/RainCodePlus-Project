#include "RCUiWidgetBase.h"

URCUiWidgetBase::URCUiWidgetBase() {
    this->bEnablePause = true;
    this->bIsPause = false;
    this->bUseTimeOfMaterial = false;
}

void URCUiWidgetBase::SetPosition(FVector2D In2DPosition) {
}

void URCUiWidgetBase::ReleaseWidget() {
}


void URCUiWidgetBase::MoveToCenter() {
}

bool URCUiWidgetBase::LoadCheck() {
    return false;
}

bool URCUiWidgetBase::IsWidgetPause() {
    return false;
}


