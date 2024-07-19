#include "RCSoundManagerBFL.h"

URCSoundManagerBFL::URCSoundManagerBFL() {
}

void URCSoundManagerBFL::UpdataVolume(ERCSoundType SoundType, float Volume) {
}

void URCSoundManagerBFL::UpdataSingleVolumeForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float volumeRate) {
}

void URCSoundManagerBFL::UpdataSingleVolume(ERCSoundType SoundType, int32 soundIndex, float volumeRate) {
}

void URCSoundManagerBFL::StopSoundBeforeLoading() {
}

void URCSoundManagerBFL::StopSingleForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor, bool is3DSound) {
}

void URCSoundManagerBFL::StopSingle(ERCSoundType SoundType, int32 soundIndex, AActor* Actor) {
}

void URCSoundManagerBFL::Stop(ERCSoundType SoundType) {
}

void URCSoundManagerBFL::SpawnSoundForSoundIDMovingActor(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor, float RangeMin, float RangeMax, bool IsLoop, const FString& CharaID) {
}

void URCSoundManagerBFL::SpawnSoundForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, const FString& CharaID, FVector Location, float RangeMin, float RangeMax, bool IsLoop, AActor* Actor, USoundAttenuation* SoundAttenuation) {
}

void URCSoundManagerBFL::SpawnSoundForMovingActor(ERCSoundType SoundType, int32 soundIndex, AActor* Actor, float RangeMin, float RangeMax, bool IsLoop, const FString& CharaID) {
}

void URCSoundManagerBFL::SpawnSound(ERCSoundType SoundType, int32 soundIndex, const FString& CharaID, FVector Location, float RangeMin, float RangeMax, bool IsLoop, AActor* Actor, USoundAttenuation* SoundAttenuation) {
}

void URCSoundManagerBFL::SetSQCTime(float Time) {
}

void URCSoundManagerBFL::SetRunningSQC(bool isFlag) {
}

void URCSoundManagerBFL::SetPlaySoundForVoiceID(FName VoiceID, FName voiceCharaID, FName FacialName, FName useMorph, bool bAllowfacialFlowLiquid, float volumeRate) {
}

void URCSoundManagerBFL::SetPlaySoundForParamSoundIDVolume(ERCSoundType SoundType, const FString& ParamSoundID, bool IsLoop, const FString& CharaID, bool isFadeIn, float volumeRate) {
}

void URCSoundManagerBFL::SetPlaySoundForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, bool IsLoop, const FString& CharaID, bool isFadeIn) {
}

void URCSoundManagerBFL::SetPlaySound(ERCSoundType SoundType, int32 soundIndex, bool IsLoop, const FString& CharaID, bool isFadeIn) {
}

void URCSoundManagerBFL::SetPlayAmatanVoice(FName VoiceID) {
}

void URCSoundManagerBFL::SetLipSyncCharaArray(TArray<ACharacter*> charaArray) {
}

void URCSoundManagerBFL::SetFadeSoundForSoundIDPosition(ERCSoundType soundType1, const FString& paramSoundID1, AActor* actor1, ERCSoundType soundType2, const FString& paramSoundID2, AActor* actor2) {
}

void URCSoundManagerBFL::SetFadeSoundForPosition(ERCSoundType soundType1, int32 soundIndex1, AActor* actor1, ERCSoundType soundType2, int32 soundIndex2, AActor* actor2) {
}

void URCSoundManagerBFL::SetEnableLipSync(bool IsEnable) {
}

void URCSoundManagerBFL::SetDisableLipSyncCharaID(FName CharaID) {
}

void URCSoundManagerBFL::SetBackLogFlag(bool IsEnable) {
}

void URCSoundManagerBFL::Set3DSoundPlayFlag(const FString& ActorName, bool IsPause) {
}

void URCSoundManagerBFL::ResumeSingleForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor) {
}

void URCSoundManagerBFL::ResumeSingle(ERCSoundType SoundType, int32 soundIndex, AActor* Actor) {
}

void URCSoundManagerBFL::ResumeForSoundType(ERCSoundType SoundType) {
}

void URCSoundManagerBFL::ResumeFieldSound() {
}

void URCSoundManagerBFL::Resume() {
}

void URCSoundManagerBFL::ResetVoiceCharaFacialOfActor(AActor* InActor) {
}

void URCSoundManagerBFL::ResetVoiceCharaFacial() {
}

void URCSoundManagerBFL::ResetDisableLipSyncCharaID() {
}

void URCSoundManagerBFL::ResetAreaChange() {
}

void URCSoundManagerBFL::ReloadVoiceSheet() {
}

void URCSoundManagerBFL::PauseSingleForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor) {
}

void URCSoundManagerBFL::PauseSingle(ERCSoundType SoundType, int32 soundIndex, AActor* Actor) {
}

void URCSoundManagerBFL::PauseForSoundType(ERCSoundType SoundType) {
}

void URCSoundManagerBFL::Pause() {
}

void URCSoundManagerBFL::LoadNonResidentSheet(const FString& SheetID) {
}

bool URCSoundManagerBFL::IsPlaying(ERCSoundType SoundType, const FString& ParamSoundID) {
    return false;
}

bool URCSoundManagerBFL::IsLoadCompleteNonResidentSheet(ERCSoundType SoundType) {
    return false;
}

bool URCSoundManagerBFL::IsDeathMatchBattle() {
    return false;
}

FName URCSoundManagerBFL::GetVoiceID(FName TextID, int32 Chapter) {
    return NAME_None;
}

ERCSoundType URCSoundManagerBFL::GetSoundType(ERCSoundType SoundType, int32 OptionType) {
    return ERCSoundType::BGM;
}

void URCSoundManagerBFL::GetSoundParameter(ERCSoundType SoundType, const FString& ParamSoundID, int32& soundIndex, FString& SoundId, FString& CharaID, int32& OptionType) {
}

ARCSoundManager* URCSoundManagerBFL::GetSoundManager() {
    return NULL;
}

TArray<FString> URCSoundManagerBFL::GetPlayingSeIDArray() {
    return TArray<FString>();
}

TArray<FString> URCSoundManagerBFL::GetPlayingEnvIDArray() {
    return TArray<FString>();
}

TArray<FString> URCSoundManagerBFL::GetPlayingBgmIDArray() {
    return TArray<FString>();
}

void URCSoundManagerBFL::FadeOutForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float fadeOutTime, float finishVolume) {
}

void URCSoundManagerBFL::FadeOut(ERCSoundType SoundType, int32 Index, float fadeOutTime, float finishVolume) {
}

void URCSoundManagerBFL::FadeInForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float fadeInTime, float StartTime, float finishVolume) {
}

void URCSoundManagerBFL::FadeIn(ERCSoundType SoundType, int32 Index, float fadeInTime, float StartTime, float finishVolume) {
}

void URCSoundManagerBFL::CrossFadeForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float fadeOutTime) {
}

void URCSoundManagerBFL::CrossFade(ERCSoundType SoundType, int32 Index, float fadeOutTime) {
}

void URCSoundManagerBFL::ChangeMapEnvSoundVolume(float Volume, float FadeTime) {
}

void URCSoundManagerBFL::ActionSequencerSound(FRCParamSequencerSoundTemplateTableRow SoundData, bool bMovie) {
}


