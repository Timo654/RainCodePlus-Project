#include "SSLevelSequenceActor.h"
#include "SSLevelSequencePlayer.h"

ASSLevelSequenceActor::ASSLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USSLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
    this->bIsDestroy = false;
    this->CancelLevelSequence = NULL;
    this->bCancelPlayEnable = false;
}

void ASSLevelSequenceActor::StopSequencePlayer() {
}

void ASSLevelSequenceActor::StopPlayerAndDestroy(bool bCancel) {
}

void ASSLevelSequenceActor::StartCharacterCameraFromPlayerOnPlay() {
}

void ASSLevelSequenceActor::SetSequencePlayerAttachParam(FKoratAttachParamInfo AttachParam) {
}

void ASSLevelSequenceActor::SetRebindsForGame(bool bRebindOwnerCharacter, bool bRebindCharacterCamera, bool bRebindFrontCamera, bool bRebindToonDirectionLight) {
}

bool ASSLevelSequenceActor::SetRebind(const FString& InNameRegexPattern, AActor* RebindActor, bool DisableAnimTrack, bool DisableTransformTrack) {
    return false;
}

void ASSLevelSequenceActor::SetPlayInfoNextLabel(FName Label, FName NewNextLabel) {
}

void ASSLevelSequenceActor::SetPlayInfo(TArray<FKoratSequencePlayInfo>& InPlayInfoList) {
}

void ASSLevelSequenceActor::SetCancelLevelSequence(ULevelSequence* InCancelLevelSequence) {
}

bool ASSLevelSequenceActor::PlaySequencePlayerInLooping(int32 StartFrame, bool bPauseAtEnd, int32 NumLoops) {
    return false;
}

bool ASSLevelSequenceActor::PlaySequencePlayerByInfo(FName Label, float PlayRatio) {
    return false;
}

bool ASSLevelSequenceActor::PlaySequencePlayer(int32 StartFrame, bool bPauseAtEnd) {
    return false;
}

void ASSLevelSequenceActor::KillMySelf() {
}

bool ASSLevelSequenceActor::IsSequencePlayerPlaying() {
    return false;
}

USSLevelSequencePlayer* ASSLevelSequenceActor::GetSSSequencePlayer() {
    return NULL;
}

void ASSLevelSequenceActor::AddRebindInfo(FMovieSceneObjectBindingID InBindingId, const FString& InName, uint32 InActorGUID) {
}


