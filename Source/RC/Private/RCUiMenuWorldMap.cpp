#include "RCUiMenuWorldMap.h"

URCUiMenuWorldMap::URCUiMenuWorldMap() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_Select_Start = NULL;
    this->AN_Select_Wait = NULL;
    this->AN_Select_Finish = NULL;
    this->AN_Select_OnCursor = NULL;
    this->AN_Select_OutCursor = NULL;
    this->AN_Select_OnCursor_Wait = NULL;
    this->WorldMapData = NULL;
    this->WorldMapTable = NULL;
    this->PointerMoveSpeed = 8.00f;
    this->SoftwareCursor = NULL;
    this->BufferCursor = NULL;
}

void URCUiMenuWorldMap::WaitingOpen() {
}

void URCUiMenuWorldMap::StartPush() {
}

void URCUiMenuWorldMap::OpenAreaSelect(bool bInIsBusMenu) {
}

void URCUiMenuWorldMap::Open() {
}

void URCUiMenuWorldMap::OnFinishSelectStartAnim() {
}

void URCUiMenuWorldMap::OnFinishOnCursorAnim() {
}

void URCUiMenuWorldMap::OnFinishGenericWindow(bool bResult) {
}

void URCUiMenuWorldMap::OnChangeInputPlatform(ERCInputPlatform InInputPlatform) {
}

void URCUiMenuWorldMap::OnButtonGuideBackButtonClick(ERCInputKeyType InKeyType) {
}

void URCUiMenuWorldMap::InitializeMenuWorldMap() {
}

void URCUiMenuWorldMap::FinishTutorial() {
}

void URCUiMenuWorldMap::CloseAreaSelect() {
}

void URCUiMenuWorldMap::Close() {
}


