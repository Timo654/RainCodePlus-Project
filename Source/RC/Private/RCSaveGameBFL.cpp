#include "RCSaveGameBFL.h"

URCSaveGameBFL::URCSaveGameBFL() {
}

bool URCSaveGameBFL::StartSave_SystemData() {
    return false;
}

bool URCSaveGameBFL::StartSave_SaveGameDataStoryMode(ERCStoryMode InStoryMode, ERCSaveDataType InType, int32 InSlot) {
    return false;
}

bool URCSaveGameBFL::StartSave_SaveGameDataNazoManualSave(ERCSaveDataType InType, int32 InSlot) {
    return false;
}

bool URCSaveGameBFL::StartSave_SaveGameDataMemory() {
    return false;
}

bool URCSaveGameBFL::StartSave_SaveGameData(ERCSaveDataType InType, int32 InSlot) {
    return false;
}

bool URCSaveGameBFL::StartSave_DevelopmentData() {
    return false;
}

bool URCSaveGameBFL::StartSave_AutoSaveGameDataStoryMode(ERCStoryMode InStoryMode) {
    return false;
}

bool URCSaveGameBFL::StartSave_AutoSaveGameData() {
    return false;
}

bool URCSaveGameBFL::StartLoad_SystemeData() {
    return false;
}

bool URCSaveGameBFL::StartLoad_SaveGameDataStoryMode(ERCStoryMode InStoryMode, ERCSaveDataType InType, int32 InSlot) {
    return false;
}

bool URCSaveGameBFL::StartLoad_SaveGameDataMemory() {
    return false;
}

bool URCSaveGameBFL::StartLoad_SaveGameData(ERCSaveDataType InType, int32 InSlot) {
    return false;
}

bool URCSaveGameBFL::StartLoad_LastSaveGameData(ERCStoryMode InStoryMode) {
    return false;
}

bool URCSaveGameBFL::StartLoad_DevelopmentData() {
    return false;
}

void URCSaveGameBFL::SetPlayerControllerInfo() {
}

void URCSaveGameBFL::SetOptionSubLevelQuality(ERCOptionSubLevel InOptionSubLevel) {
}

void URCSaveGameBFL::SetOptionMovieQuality(ERCMovieQuality InMovieQuality) {
}

void URCSaveGameBFL::SetOptionMobQuality(ERCOptionMobQuality InMobQuality) {
}

void URCSaveGameBFL::SetOptionCharacterDraw(ERCOptionCharacterDraw InOptionCharacterDraw) {
}

void URCSaveGameBFL::RestartPlayerMove() {
}

bool URCSaveGameBFL::IsPlayerMove() {
    return false;
}

bool URCSaveGameBFL::IsFinished() {
    return false;
}

bool URCSaveGameBFL::IsError() {
    return false;
}

ERCVoiceLanguage URCSaveGameBFL::GetOptionVoiceLanguage() {
    return ERCVoiceLanguage::JA;
}

ERCOptionUiQuality URCSaveGameBFL::GetOptionUiQuality() {
    return ERCOptionUiQuality::UiQualit4K;
}

ERCOptionSubLevel URCSaveGameBFL::GetOptionSubLevelQuality() {
    return ERCOptionSubLevel::SubLevelLv0_Normal;
}

ERCMovieQuality URCSaveGameBFL::GetOptionMovieQuality() {
    return ERCMovieQuality::Hi;
}

ERCOptionMobQuality URCSaveGameBFL::GetOptionMobQuality() {
    return ERCOptionMobQuality::MobLv0_Normal;
}

bool URCSaveGameBFL::GetOptionFinaleSkipEnable() {
    return false;
}

ERCOptionCharacterDraw URCSaveGameBFL::GetOptionCharacterDraw() {
    return ERCOptionCharacterDraw::CharacterDrawLv0_Normal;
}

FString URCSaveGameBFL::GetErrorText() {
    return TEXT("");
}

int32 URCSaveGameBFL::Get_SaveGameDataList(TArray<FRCSaveSlotInfo>& OutSlotList) {
    return 0;
}

bool URCSaveGameBFL::Check_SaveGameDataStoryMode(ERCStoryMode InStoryMode) {
    return false;
}

bool URCSaveGameBFL::Check_SaveGameData() {
    return false;
}


