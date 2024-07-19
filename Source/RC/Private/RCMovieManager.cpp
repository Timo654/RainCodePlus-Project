#include "RCMovieManager.h"

ARCMovieManager::ARCMovieManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManaComponent = NULL;
    this->MovieSource = NULL;
    this->Texture = NULL;
    this->Material = NULL;
    this->Widget = NULL;
    this->bpMovieIndex = 0;
    this->isUpdateBpMovieIndex = false;
    this->isLoadFinish = false;
    this->isCallPlayEnd = true;
    this->skipButtonCount = 0.00f;
    this->IsLoop = false;
    this->skipTimeMax = 3.00f;
    this->isOpening = false;
    this->debugMovieStatusIndex = -1;
    this->isCheckPreparing = false;
    this->isBeforeSkipEnable = false;
    this->isCheckFinishFade = false;
    this->isDispSkipGauge = false;
    this->isDebugMovieSkip = false;
    this->isStartLoad = false;
}

void ARCMovieManager::WidgetToRemoveFromViewport() {
}

void ARCMovieManager::UpdateSkipGauge() {
}

void ARCMovieManager::Update(float DeltaTime) {
}

void ARCMovieManager::SetSkipTime(float skipTime) {
}

void ARCMovieManager::SetRain(bool isPlay) {
}

void ARCMovieManager::SetOpeningFlag(bool NewIsOpening) {
}

void ARCMovieManager::SetMovieData(const FString& _movieID, URCUserWidget* _widget, URCManaComponent* _manaComponent) {
}

void ARCMovieManager::SetIsLoop(bool _isloop) {
}

void ARCMovieManager::ResetSkipGauge() {
}

void ARCMovieManager::ResetLoadedMovieData() {
}

void ARCMovieManager::ResetBeforeLoadMovieData() {
}

void ARCMovieManager::Reset() {
}

UMaterialInstanceDynamic* ARCMovieManager::ReadyMovieMaterial() {
    return NULL;
}

void ARCMovieManager::PlayMovie() {
}

void ARCMovieManager::Pause(bool IsPause) {
}

bool ARCMovieManager::IsPlaying() {
    return false;
}

bool ARCMovieManager::IsPlayEnd() {
    return false;
}

bool ARCMovieManager::IsLoadedMovie() {
    return false;
}

void ARCMovieManager::Initialize() {
}

float ARCMovieManager::GetMovieTime() {
    return 0.0f;
}

bool ARCMovieManager::GetIsLoop() {
    return false;
}

bool ARCMovieManager::CheckSkipButtonCount(float DeltaTime) {
    return false;
}

void ARCMovieManager::CheckSkip(float DeltaTime) {
}


