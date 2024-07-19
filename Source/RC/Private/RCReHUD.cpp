#include "RCReHUD.h"
#include "RCAdvHUDMapComponent.h"

ARCReHUD::ARCReHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->Components.AddDefaulted(4);
    this->MapComponent = CreateDefaultSubobject<URCAdvHUDMapComponent>(TEXT("MapComponent"));
    this->HUDState = ERCReHUDState::None;
    this->FreeMoveState = ERCReHUDFreeMoveState::None;
    this->FreeMoveRequest = ERCAdvHUDWidgetRequest::None;
    this->bFreeMoveButtonGuide = false;
    this->bIsMiniMapSmall = false;
    this->HUDStateAtFinishResearchMode = ERCReHUDState::None;
    this->SoundNovelDataCurrentIndex = 0;
    this->bSoundNovelDelayToNext = false;
    this->bSoundNovelWaitCmd = false;
    this->SoundNovelWidgetState = ERCAdvHUDWidgetState::None;
    this->SoundNovelWidgetOldState = ERCAdvHUDWidgetState::None;
    this->SoundNovelWidget = NULL;
}

void ARCReHUD::StartLocation(bool bInMiniMap, bool bInLocation) {
}

bool ARCReHUD::SoundNovelWidgetStart(bool bInShowBackgroundFade) {
    return false;
}

bool ARCReHUD::SoundNovelStart(UDataTable* InSoundNovelDataTable, bool bInShowBackgroundFade) {
    return false;
}

bool ARCReHUD::SoundNovelShowBackgroundFade(bool bInShow) {
    return false;
}

bool ARCReHUD::SetMiniMapLocation(FName in_LocationID, FName in_LocationTextID) {
    return false;
}

bool ARCReHUD::SetLocationName(FName in_LocationID, FName in_LocationTextID) {
    return false;
}

bool ARCReHUD::SetLocationDisplayLocation(FName in_LocationID, FName in_LocationTextID) {
    return false;
}

bool ARCReHUD::SelectStartWithDataArray(TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID) {
    return false;
}

bool ARCReHUD::SelectStart(int32 in_SelectNum, FName in_QuestionTextID) {
    return false;
}

bool ARCReHUD::SelectSetData(int32 in_Index, FName in_TextID, bool in_bCheckMark) {
    return false;
}

bool ARCReHUD::SelectFinish() {
    return false;
}

bool ARCReHUD::LoadLocationDataName(FName in_LocationID, FName in_LocationTextID) {
    return false;
}

ERCAdvHUDWidgetState ARCReHUD::GetTalkWindowState() {
    return ERCAdvHUDWidgetState::None;
}

ERCAdvHUDWidgetState ARCReHUD::GetSelectWindowState() {
    return ERCAdvHUDWidgetState::None;
}

int32 ARCReHUD::GetSelectIndex() {
    return 0;
}

int32 ARCReHUD::GetSelectedIndex() {
    return 0;
}

ERCReHUDState ARCReHUD::GetHUDState() {
    return ERCReHUDState::None;
}

ERCReHUDFreeMoveState ARCReHUD::GetFreeMoveState() {
    return ERCReHUDFreeMoveState::None;
}

FName ARCReHUD::GetCurrentMiniMapTextID() {
    return NAME_None;
}

FName ARCReHUD::GetCurrentMiniMapLocationID() {
    return NAME_None;
}

FName ARCReHUD::GetCurrentLocationTextID() {
    return NAME_None;
}

FName ARCReHUD::GetCurrentLocationID() {
    return NAME_None;
}

FName ARCReHUD::GetCurrentLocationDisplayTextID() {
    return NAME_None;
}

FName ARCReHUD::GetCurrentLocationDisplayLocationID() {
    return NAME_None;
}

void ARCReHUD::FreeMoveStart() {
}

void ARCReHUD::FreeMoveFinish() {
}

bool ARCReHUD::FreeMoveButtonGuideUpdate() {
    return false;
}

bool ARCReHUD::FreeMoveButtonGuideStart() {
    return false;
}

bool ARCReHUD::FreeMoveButtonGuideFinish() {
    return false;
}

void ARCReHUD::FinishLocation() {
}

bool ARCReHUD::CheckSoundNovelFinished() {
    return false;
}

bool ARCReHUD::CheckSelectWindow() {
    return false;
}

bool ARCReHUD::CheckSelectStarted() {
    return false;
}

bool ARCReHUD::CheckSelectFinished() {
    return false;
}

bool ARCReHUD::CheckLocationStarted(bool bInMiniMap, bool bInLocation) {
    return false;
}

bool ARCReHUD::CheckLocationRunning() {
    return false;
}

bool ARCReHUD::CheckLocationFinished() {
    return false;
}

bool ARCReHUD::CheckFreeMoveButtonGuide() {
    return false;
}


