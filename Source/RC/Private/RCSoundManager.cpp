#include "RCSoundManager.h"

ARCSoundManager::ARCSoundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isFade = false;
    this->paramLipSyncForTextIDData = NULL;
    this->isLoadChapterLipSyncParam = false;
    this->AtomStatics = NULL;
    this->isInitSheetLoad = false;
    this->isCueSheetLoaded = false;
    this->isStartedCueSheetLoad = false;
    this->isReloadVoiceSheet = true;
    this->IsMenuPause = false;
    this->defaultLipSyncWidth = 0.00f;
    this->adjustAiueoLipSyncRate = 0.00f;
    this->isLoadingFinish = false;
    this->isLoadingLipSyncData = false;
    this->isEnableLipSync = true;
    this->beforeTopVowelIndex = 0;
    this->isCheckSubTitle = false;
    this->isBackLog = false;
    this->isInitVolume = false;
    this->isEnableSkip = false;
    this->isEnableSQCSkip = false;
    this->isRunningSQC = false;
    this->SQCTime = 0.00f;
    this->IsDeathMatchBattle = false;
    this->bDisableGameSound = false;
}

void ARCSoundManager::UpdateSingleSoundVolume(ERCSoundType SoundType, const FString& SoundId, float volumeRate) {
}

void ARCSoundManager::UpdateOptionVolume(ERCSoundType SoundType, float Volume) {
}

void ARCSoundManager::UpdateMenuPauseVolume() {
}

void ARCSoundManager::UpdateMasterVolume(float MasterVolume) {
}

void ARCSoundManager::UpdateFade(float DeltaTime) {
}

void ARCSoundManager::Stop(ERCSoundType SoundType) {
}

void ARCSoundManager::StartSheetLoad() {
}

void ARCSoundManager::SetPlaySound(ERCSoundType SoundType, const FString& SoundId, bool IsLoop, const FString& CharaID, bool isFadeIn, const FString& ParamSoundID, ERCSoundType OptionType, float volumeRate) {
}

void ARCSoundManager::SetLipSyncCharaArray(TArray<ACharacter*> charaArray) {
}

void ARCSoundManager::SetFadeSoundForPositionData(FSoundPlayerPosFade Data) {
}

void ARCSoundManager::ResumeSingle(ERCSoundType SoundType, const FString& SoundId, AActor* Actor) {
}

void ARCSoundManager::ResumeForSoundType(ERCSoundType SoundType) {
}

void ARCSoundManager::ResumeFieldSound() {
}

void ARCSoundManager::Resume() {
}

void ARCSoundManager::ResetNonResidentSheet() {
}

void ARCSoundManager::ReloadVoiceSheet() {
}

void ARCSoundManager::PlayLipSync() {
}

void ARCSoundManager::Play(ERCSoundType SoundType, bool IsLoop, float StartTime) {
}

void ARCSoundManager::PauseSingle(ERCSoundType SoundType, const FString& SoundId, AActor* Actor) {
}

void ARCSoundManager::PauseForSoundType(ERCSoundType SoundType, bool bAllPause) {
}

void ARCSoundManager::Pause() {
}

void ARCSoundManager::LoopSetting(USoundAtomCue* pSoundCue, bool IsLoop) {
}

void ARCSoundManager::LoadNonResidentSheet(const FString& SheetID) {
}

bool ARCSoundManager::isSameVolume(float lVolume, float rVolume) {
    return false;
}

bool ARCSoundManager::IsLoadedNonResidentSheet() {
    return false;
}

bool ARCSoundManager::isCurrentSoundID(ERCSoundType SoundType, const FString& SoundId, const FString& CharaID) {
    return false;
}

void ARCSoundManager::Initialize() {
}

TArray<FSoundData> ARCSoundManager::GetVoiceSoundDataArray() {
    return TArray<FSoundData>();
}

FRCParamSoundFormatTableRow ARCSoundManager::GetSoundParamData(ERCSoundType SoundType) {
    return FRCParamSoundFormatTableRow{};
}

FString ARCSoundManager::GetSoundId(ERCSoundType SoundType, int32 soundIndex, const FString& CharaID) {
    return TEXT("");
}

TArray<FSoundData> ARCSoundManager::GetSoundDataArray(ERCSoundType SoundType) {
    return TArray<FSoundData>();
}

FLoadData ARCSoundManager::GetSoundAtomCue(ERCSoundType SoundType) {
    return FLoadData{};
}

TArray<FSoundData> ARCSoundManager::GetSeSoundDataArray() {
    return TArray<FSoundData>();
}

FString ARCSoundManager::GetPlayingBGMID() {
    return TEXT("");
}

FRCParamSoundNonResidentListTableRow ARCSoundManager::GetNonResidentCueSheetParam(const FString& SheetID) {
    return FRCParamSoundNonResidentListTableRow{};
}

float ARCSoundManager::GetLipSyncVol(float voiceVol) {
    return 0.0f;
}

FRCParamLipSyncDataAdjustTableRow ARCSoundManager::GetLipSyncParamDataAdjust(FName voiceCharaID) {
    return FRCParamLipSyncDataAdjustTableRow{};
}

TArray<FSoundData> ARCSoundManager::GetEnviromentSoundDataArray() {
    return TArray<FSoundData>();
}

TArray<FName> ARCSoundManager::GetCueSheetParamPathArray(ERCSoundType SoundType) {
    return TArray<FName>();
}

TArray<FSoundData> ARCSoundManager::GetBgmSoundDataArray() {
    return TArray<FSoundData>();
}

void ARCSoundManager::FadeOutAll(ERCSoundType SoundType, float fadeOutTime, float finishVolume) {
}

void ARCSoundManager::FadeOut(ERCSoundType SoundType, const FString& SoundId, float fadeOutTime, float finishVolume) {
}

void ARCSoundManager::FadeInAll(ERCSoundType SoundType, float fadeInTime, float StartTime, float finishVolume) {
}

void ARCSoundManager::FadeIn(ERCSoundType SoundType, const FString& SoundId, float fadeInTime, float StartTime, float finishVolume, bool isBaseOriginalVolume) {
}

void ARCSoundManager::CrossFade(ERCSoundType SoundType, const FString& SoundId, float fadeInTime) {
}

void ARCSoundManager::CheckSheetLoad() {
}

float ARCSoundManager::CalcVolume(ERCSoundType SoundType) {
    return 0.0f;
}


