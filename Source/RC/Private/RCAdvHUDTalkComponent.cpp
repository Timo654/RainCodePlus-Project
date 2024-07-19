#include "RCAdvHUDTalkComponent.h"

URCAdvHUDTalkComponent::URCAdvHUDTalkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowEditInstance = false;
    this->bBalloonEnable = false;
    this->BalloonNearScale = 1.00f;
    this->bBalloonFar3D = false;
    this->Balloon3DScale = 0.15f;
    this->BalloonFarScale = 1.00f;
    this->bBalloonFarHiddenByTrace = false;
    this->BalloonNumMax = 15;
    this->UsingBalloonNum = 0;
    this->bTalkIconEnable = false;
    this->TalkIconScale = 1.00f;
    this->TalkIconSubquestScale = 1.00f;
    this->TalkIconNumMax = 10;
    this->UsingTalkIconNum = 0;
    this->TalkRequest = ERCAdvHUDWidgetRequest::None;
    this->TalkRequestWindowType = ERCAdvHUDTalkWindowType::Normal;
    this->TalkWindowType = ERCAdvHUDTalkWindowType::Normal;
    this->bTalkSkipTyping = false;
    this->TalkWindowState = ERCAdvHUDWidgetState::None;
    this->TalkWindowOldState = ERCAdvHUDWidgetState::None;
    this->TalkWindowPriority = 6000;
    this->MessageWindow = NULL;
    this->ShinigamiActor = NULL;
    this->ShinigamiBalloonState = ERCAdvHUDWidgetState::None;
    this->ShinigamiBalloonOldState = ERCAdvHUDWidgetState::None;
    this->bShinigamiBalloonOutside = false;
    this->ShinigamiBalloonPriority = 6100;
    this->ShinigamiBalloonWidget = NULL;
    this->bSequentialTalkForceAutoPlay = false;
    this->bSequentialTalk = false;
    this->SequentialTalkIndex = 0;
    this->bSequentialTalkDelayToNext = false;
    this->bSequentialTalkWaitCmd = false;
    this->bSequentialTalkRequestSuspend = false;
    this->bSequentialTalkSuspending = false;
    this->bSequentialTalkRestart = false;
    this->SelectWindowState = ERCAdvHUDWidgetState::None;
    this->SelectRequest = ERCAdvHUDWidgetRequest::None;
    this->SelectRequestNum = 0;
    this->bSelectStartAllWidgetHiddenEnable = true;
    this->SelectWindow = NULL;
    this->bSpSelect = false;
    this->SpSelectType = ERCAdvHUDSpSelectType::EyeTracking;
    this->SpSelectWBPPath_EyeTracking = TEXT("/Game/RC/UI/ReHUD/ReSelectEyeTracking/WBP_ReSelectEyeTracking.WBP_ReSelectEyeTracking_C");
    this->SpSelectWBPLoadState = ERCAdvHUDWBPLoadState::None;
    this->SpSelectWindow = NULL;
}

bool URCAdvHUDTalkComponent::TalkWindowClose(ERCAdvHUDTalkWindowType InWindowType) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkStartSimple(ERCAdvHUDTalkWindowType InWindowType) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkStart2(ERCAdvHUDTalkWindowType InWindowType, FName InTextID, int32 InCharacterFaceID, int32 InCharacterFacialID, bool bInAutoPlay) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkSetTextSimple(FName InTextID, float InDelayAtEndText) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkSetTextData(FRCAdvHUDTalkTextData InTextData) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkSetText2(int32 InCharacterFaceID, int32 InCharacterFacialID, FName InTextID, int32 InCharacter3DID, FName InCharacter3DFacialID, FName InVoiceID, float InDelayAtEndText) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkSetGradationFilter(FName InFilterID) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkSetForceTextSpeedSettings(bool bInIsForceTextSpeed, int32 InForceTextSpeed) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkSetAuto(bool bInAutoPlay) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkLoadNameplateData(int32 InCharacterNameID, int32 InCharacterNameSubID) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkLoadFaceData(int32 InCharacterFaceID, int32 InCharacterFacialID) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkLoadCharacterData2(int32 InCharacterNameID, TArray<int32> InCharacterNameSubIDs, int32 InCharacterFaceID, TArray<int32> InCharacterFacialIDs) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkLoadCharacterData(int32 InCharacterNameID, int32 InCharacterNameSubID, int32 InCharacterFaceID, int32 InCharacterFacialID) {
    return false;
}

bool URCAdvHUDTalkComponent::TalkFinish() {
    return false;
}

bool URCAdvHUDTalkComponent::SpSelect_StartWithDataArray(ERCAdvHUDSpSelectType NewSpSelectType, TArray<FRCReHUDSelectData> NewSelectDataArray, FName QuestionTextID) {
    return false;
}

bool URCAdvHUDTalkComponent::SpSelect_StartLoadWBP(ERCAdvHUDSpSelectType NewSpSelectType) {
    return false;
}

bool URCAdvHUDTalkComponent::SpSelect_ReleaseWBP(ERCAdvHUDSpSelectType NewSpSelectType) {
    return false;
}

bool URCAdvHUDTalkComponent::SpSelect_CheckLoadWBPCompleted(ERCAdvHUDSpSelectType NewSpSelectType) {
    return false;
}

bool URCAdvHUDTalkComponent::SetTalkIconData(APawn* InPawn, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal) {
    return false;
}

void URCAdvHUDTalkComponent::SetShinigamiActor(ARCCharacterRender* InShinigamiActor) {
}

bool URCAdvHUDTalkComponent::SetBalloonData(APawn* InPawn, ESCBaloonFrame InBalloonFrameType, ESCBaloonType InBalloonContentType, FName InTextID, bool bInBalloonDraw, bool bInTextDraw) {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkStartFromTalkID(FName InTalkID, bool bInForceAutoPlay) {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkStartFromDataTable(UDataTable* InTable, FName InTalkID, bool bInForceAutoPlay) {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkStartFromData2(FRCTalkData InTalkData, bool bInForceAutoPlay) {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkStart2(FName InTalkID, FRCTalkData InTalkData, bool bInForceAutoPlay) {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkResume() {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkRestart() {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkRequestSuspend() {
    return false;
}

bool URCAdvHUDTalkComponent::SequentialTalkFinish() {
    return false;
}

bool URCAdvHUDTalkComponent::SelectStartWithDataArray(TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID) {
    return false;
}

bool URCAdvHUDTalkComponent::SelectStart(int32 InSelectNum, FName InQuestionTextID) {
    return false;
}

bool URCAdvHUDTalkComponent::SelectSetData(int32 InIndex, FName InTextID, bool InbCheckMark) {
    return false;
}

bool URCAdvHUDTalkComponent::SelectFinish() {
    return false;
}

bool URCAdvHUDTalkComponent::IsTalkIconVisible(APawn* InPawn) {
    return false;
}

bool URCAdvHUDTalkComponent::IsBalloonVisible(APawn* InPawn) {
    return false;
}

ERCAdvHUDWidgetState URCAdvHUDTalkComponent::GetUsingTalkWidgetState() {
    return ERCAdvHUDWidgetState::None;
}

ERCAdvHUDWidgetState URCAdvHUDTalkComponent::GetUsingTalkWidgetOldState() {
    return ERCAdvHUDWidgetState::None;
}

int32 URCAdvHUDTalkComponent::GetTalkIconDataNum() {
    return 0;
}

bool URCAdvHUDTalkComponent::GetTalkIconData(int32 InIndex, FRCAdvHUDTalkIconData& OutTalkIconData) {
    return false;
}

int32 URCAdvHUDTalkComponent::GetSequentialTalkVoiceCharacterID() {
    return 0;
}

ERCAdvHUDWidgetState URCAdvHUDTalkComponent::GetSelectWindowState() {
    return ERCAdvHUDWidgetState::None;
}

int32 URCAdvHUDTalkComponent::GetSelectIndex() {
    return 0;
}

int32 URCAdvHUDTalkComponent::GetSelectedIndex() {
    return 0;
}

int32 URCAdvHUDTalkComponent::GetBalloonDataNum() {
    return 0;
}

bool URCAdvHUDTalkComponent::GetBalloonData(int32 InIndex, FRCAdvHUDBalloonData& OutBalloonData) {
    return false;
}

bool URCAdvHUDTalkComponent::CheckTalkWindowClosed(ERCAdvHUDTalkWindowType InWindowType) {
    return false;
}

bool URCAdvHUDTalkComponent::CheckTalkWindow() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckTalkStarted() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckTalkSkipVoice(FName InTextID) {
    return false;
}

bool URCAdvHUDTalkComponent::CheckTalkFinished() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckTalkEndText() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSequentialTalkSuspending() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSequentialTalkFromTalkID(FName InTalkID) {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSequentialTalkFinishedLastText() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSequentialTalkFinished() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSequentialTalkCloseAtAllEnd() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSequentialTalk() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSelectWindow() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSelectStarted() {
    return false;
}

bool URCAdvHUDTalkComponent::CheckSelectFinished() {
    return false;
}


