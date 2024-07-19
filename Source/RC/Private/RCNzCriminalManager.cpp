#include "RCNzCriminalManager.h"

ARCNzCriminalManager::ARCNzCriminalManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateType = ERCNzCriminalStateType::CriminalState_None;
    this->ChapterNumber = 0;
    this->bIsEventProcess = false;
    this->EventType = ERCNzCriminalEventType::CriminalEvent_None;
    this->SelectSuspectIndex = 0;
    this->SelectedSuspectIndex = 0;
    this->MainUi = NULL;
    this->StartUI = NULL;
    this->FailureUi = NULL;
    this->bIsWaitPushKey = false;
    this->bNextState = false;
}

void ARCNzCriminalManager::StopPlayFailureCharacter() {
}

void ARCNzCriminalManager::SetWaitPushKey(bool bState) {
}

void ARCNzCriminalManager::SetupSelect() {
}

void ARCNzCriminalManager::SetupPreSelect() {
}

void ARCNzCriminalManager::SetupIncorrectProduction() {
}

void ARCNzCriminalManager::SetupHintProduction() {
}

void ARCNzCriminalManager::SetupCorrectProduction() {
}

void ARCNzCriminalManager::SetupBeginProduction() {
}

void ARCNzCriminalManager::SetupBegin(const TArray<AActor*>& InSuspectCharacterActorList) {
}

void ARCNzCriminalManager::SetLineFromTextId(const FName InLineTextId) {
}

void ARCNzCriminalManager::PlayFailureCharacter() {
}

void ARCNzCriminalManager::NotifyStartEvent() {
}

void ARCNzCriminalManager::NotifyFinishEvent() {
}

bool ARCNzCriminalManager::IsNextState() {
    return false;
}

bool ARCNzCriminalManager::IsLoadedAsset() {
    return false;
}

bool ARCNzCriminalManager::IsGameOver() {
    return false;
}

bool ARCNzCriminalManager::IsCorrectCriminal() {
    return false;
}

void ARCNzCriminalManager::Incorrect() {
}

void ARCNzCriminalManager::GiveHint() {
}

int32 ARCNzCriminalManager::GetSelectedSuspectIndex() {
    return 0;
}

FName ARCNzCriminalManager::GetHintTextId() {
    return NAME_None;
}

FName ARCNzCriminalManager::GetFailureLineId() {
    return NAME_None;
}

ERCNzCriminalEventType ARCNzCriminalManager::GetEvent() {
    return ERCNzCriminalEventType::CriminalEvent_None;
}

float ARCNzCriminalManager::GetCameraFocalLength(const int32 InCameraIndex) const {
    return 0.0f;
}

float ARCNzCriminalManager::GetCameraBlendTime(const int32 InCameraIndex) const {
    return 0.0f;
}

void ARCNzCriminalManager::GameOver() {
}

void ARCNzCriminalManager::Correct() {
}


