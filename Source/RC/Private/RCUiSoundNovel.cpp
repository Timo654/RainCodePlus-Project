#include "RCUiSoundNovel.h"

URCUiSoundNovel::URCUiSoundNovel() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->BackWidget = NULL;
    this->NovelText = NULL;
    this->MsgCursor = NULL;
    this->TextInterval = 0.00f;
    this->bIsEndOfText = false;
    this->TalkDelay = 0.00f;
    this->bIsAutoPlay = false;
    this->AutoWaitPushTimer = 0.00f;
    this->AutoDelay = 0.00f;
}

void URCUiSoundNovel::WaitingOpenBackgroundFade() {
}

void URCUiSoundNovel::ShowBackgroundFade() {
}

void URCUiSoundNovel::SetShakeData(float InWidthX, float InWidthY, float InInterval) {
}

void URCUiSoundNovel::SetMessageSpeed() {
}

void URCUiSoundNovel::SetForceTextSpeedSettings(bool bInIsForceTextSpeed, int32 InForceTextSpeed) {
}

void URCUiSoundNovel::SetForceAutoFlag(bool bForceAuto, bool bShowAutoIcon) {
}

void URCUiSoundNovel::Open() {
}

void URCUiSoundNovel::InitializeSoundNovel() {
}

void URCUiSoundNovel::HideBackgroundFade() {
}

ESoundNovelStatus URCUiSoundNovel::GetSoundNovelStatus() {
    return ESoundNovelStatus::Idle;
}

bool URCUiSoundNovel::GetSkipTyping() {
    return false;
}

int32 URCUiSoundNovel::GetMessStatusInt() {
    return 0;
}

void URCUiSoundNovel::Close() {
}

void URCUiSoundNovel::ClearText() {
}

void URCUiSoundNovel::AddText(const FString& inString, float InDelay) {
}

void URCUiSoundNovel::AddSpace(int32 InSpaceNum) {
}


