#include "RCReUiMessageWindow.h"

URCReUiMessageWindow::URCReUiMessageWindow() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->TextInterval = 0.00f;
    this->bIsEndOfText = false;
    this->MsgCursor = NULL;
    this->Nameplate = NULL;
    this->FaceWidget = NULL;
    this->TalkDelay = 0.00f;
    this->bIsAutoPlay = false;
    this->AutoWaitPushTimer = 0.00f;
    this->AutoDelay = 0.00f;
    this->AutoDelayFromBP = 1.00f;
    this->TalkWindow = NULL;
    this->IMG_EffectsArea_FullScreen = NULL;
    this->TextLines = NULL;
    this->R_TextLine_01 = NULL;
    this->R_TextLine_02 = NULL;
}

void URCReUiMessageWindow::SetTextData(int32 InCharaNameID, int32 InNameSubID, int32 InCharaFaceID, int32 InFacialID, FName InSpeakerID, const FString& inString, float InDelay) {
}

void URCReUiMessageWindow::SetText(int32 InCharaNameID, int32 InNameSubID, int32 InCharaFaceID, int32 InFacialID, const FString& inString, float InDelay) {
}

void URCReUiMessageWindow::SetShakeData(float InWidthX, float InWidthY, float InInterval) {
}

void URCReUiMessageWindow::SetMessageSpeed() {
}

void URCReUiMessageWindow::SetForceTextSpeedSettings(bool bInIsForceTextSpeed, int32 InForceTextSpeed) {
}

void URCReUiMessageWindow::SetForceAutoFlag(bool bForceAuto, bool bShowAutoIcon) {
}

void URCReUiMessageWindow::Open(int32 InCharaNameID, int32 InNameSubID, int32 InCharaFaceID, int32 InFacialID) {
}

void URCReUiMessageWindow::InitializeMessageWindow() {
}

bool URCReUiMessageWindow::GetSkipTyping() {
    return false;
}

int32 URCReUiMessageWindow::GetMessStatusInt() {
    return 0;
}

void URCReUiMessageWindow::Close() {
}

void URCReUiMessageWindow::ClearMessage() {
}


