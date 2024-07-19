#include "RCRealHUDBFL.h"

URCRealHUDBFL::URCRealHUDBFL() {
}

void URCRealHUDBFL::StartSelect(int32 SelectMax, FName QuestionTextID) {
}

void URCRealHUDBFL::StartMessage2(int32 InCharacterFaceID, int32 InCharacterFacialID, FName InMassageTextID, FName InPartVoiceID) {
}

void URCRealHUDBFL::StartFreeMove() {
}

void URCRealHUDBFL::SoundNovelStart(bool& bSucceeded, UDataTable* SoundNovelDataTable, bool bShowBackgroundFade) {
}

void URCRealHUDBFL::SoundNovelShowBackgroundFade(bool& bSucceeded, bool bShow) {
}

void URCRealHUDBFL::SetSelectSetting(int32 SelectNum, FName InSelectTextID, bool bCheckMark) {
}

void URCRealHUDBFL::OpenMessageWindow2(ERCAdvHUDTalkWindowType WindowType) {
}

bool URCRealHUDBFL::IsTalkStart() {
    return false;
}

bool URCRealHUDBFL::IsOpenMessageWindowSync() {
    return false;
}

bool URCRealHUDBFL::IsEndMessageWindowSync() {
    return false;
}

bool URCRealHUDBFL::IsCloseMessageWindowSync() {
    return false;
}

int32 URCRealHUDBFL::GetSelectResult() {
    return 0;
}

ARCReHUD* URCRealHUDBFL::GetReHUD() {
    return NULL;
}

void URCRealHUDBFL::EndFreeMove() {
}

void URCRealHUDBFL::CloseMessageWindow() {
}

void URCRealHUDBFL::CheckSoundNovelFinished(bool& bFinished) {
}


