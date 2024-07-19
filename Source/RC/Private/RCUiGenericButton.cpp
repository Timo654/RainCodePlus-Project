#include "RCUiGenericButton.h"

URCUiGenericButton::URCUiGenericButton() {
    this->bEnablePause = false;
}

UWidget* URCUiGenericButton::WindowNavigation(EUINavigation InNavigation) {
    return NULL;
}

void URCUiGenericButton::StartPush() {
}

void URCUiGenericButton::SetButtonTextID(FName InCancelTextID, FName InDecideTextID) {
}

void URCUiGenericButton::Open(bool bInIsFocusedTrue, bool bInIsAcceptCancel, int32 InValidButtonNum, bool bInIsUseDefaultTextID) {
}

void URCUiGenericButton::NativeTick(const FGeometry& MyGeometry, float InDeltaTime) {
}

void URCUiGenericButton::InitializeGenericButton() {
}

void URCUiGenericButton::Close() {
}


