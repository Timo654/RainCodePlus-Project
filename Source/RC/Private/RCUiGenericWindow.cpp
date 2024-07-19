#include "RCUiGenericWindow.h"

URCUiGenericWindow::URCUiGenericWindow() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->Text_Center_00 = NULL;
    this->Text_Center_01 = NULL;
    this->Text_Center_02 = NULL;
    this->Text_Center_03 = NULL;
    this->Text_Guide = NULL;
}

void URCUiGenericWindow::WaitingOpen() {
}

void URCUiGenericWindow::Wait() {
}

void URCUiGenericWindow::SetWindowTextIDs(TArray<FName> InTextIDArray) {
}

void URCUiGenericWindow::SetWindowTextID(FName InTextID) {
}

void URCUiGenericWindow::SetWindowStrings(TArray<FString> InStringArray) {
}

void URCUiGenericWindow::SetButtonTextID(FName InCancelTextID, FName InDecideTextID) {
}

void URCUiGenericWindow::OpenSingleButton() {
}

void URCUiGenericWindow::Open(bool bInIsShowButton, bool bInIsFocusTrue, bool bInIsAcceptCancel, bool bInIsUseDefaultTextID) {
}

bool URCUiGenericWindow::IsGetButtonResult() {
    return false;
}

bool URCUiGenericWindow::IsFinishGenericWindow() {
    return false;
}

void URCUiGenericWindow::InitializeGenericWindow() {
}

void URCUiGenericWindow::Close() {
}


