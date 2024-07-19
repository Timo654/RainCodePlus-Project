#include "RCNzUiMessageWindow.h"

URCNzUiMessageWindow::URCNzUiMessageWindow() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->TextInterval = 0.00f;
    this->bIsEndOfText = false;
    this->TalkDelay = 0.00f;
    this->bIsAutoPlay = false;
    this->AutoDelay = 0.00f;
    this->R_TextLine_01 = NULL;
    this->R_TextLine_02 = NULL;
}

void URCNzUiMessageWindow::SetShakeData(float InWidthX, float InWidthY, float InInterval) {
}

void URCNzUiMessageWindow::SetMessageSpeed() {
}

void URCNzUiMessageWindow::Open(FName InNameID, FName InFacialID) {
}

void URCNzUiMessageWindow::InitializeMessageWindow() {
}

bool URCNzUiMessageWindow::GetSkipTyping() {
    return false;
}

int32 URCNzUiMessageWindow::GetMessStatusInt() {
    return 0;
}

void URCNzUiMessageWindow::Close() {
}

void URCNzUiMessageWindow::ClearMessage() {
}


