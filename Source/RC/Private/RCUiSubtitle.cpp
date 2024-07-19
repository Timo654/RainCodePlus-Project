#include "RCUiSubtitle.h"

URCUiSubtitle::URCUiSubtitle() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->Text_Name = NULL;
    this->TextLine_01 = NULL;
    this->MsgCursor = NULL;
    this->Nag_Message_Grp = NULL;
}

void URCUiSubtitle::WaitingOpen() {
}

void URCUiSubtitle::Wait() {
}

void URCUiSubtitle::UndoDisplaceSubtitle() {
}

void URCUiSubtitle::StartShow() {
}

void URCUiSubtitle::StartDelay() {
}

void URCUiSubtitle::SetText(const FString& InName, const FString& inString, float InDelay, bool bInOnlyCursor) {
}

void URCUiSubtitle::Open_WaitPush(bool bInEnableSkipVoice) {
}

void URCUiSubtitle::Open() {
}

void URCUiSubtitle::InitializeSubtitle() {
}

int32 URCUiSubtitle::GetSubtitleStatusNum() {
    return 0;
}

bool URCUiSubtitle::GetSkipVoice() {
    return false;
}

void URCUiSubtitle::DisplaceSubtitle(FVector2D InVector) {
}

void URCUiSubtitle::Close() {
}

void URCUiSubtitle::CallEndVoice() {
}

void URCUiSubtitle::CallDelay() {
}


