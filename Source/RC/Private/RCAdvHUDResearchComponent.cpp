#include "RCAdvHUDResearchComponent.h"

URCAdvHUDResearchComponent::URCAdvHUDResearchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowEditInstance = false;
    this->bNazo = false;
    this->State = ERCAdvHUDResearchModeState::None;
    this->OldState = ERCAdvHUDResearchModeState::None;
    this->ResearchDetailType = ERCAdvHUDResearchDetailType::Normal;
    this->ResearchDetailOldType = ERCAdvHUDResearchDetailType::Normal;
    this->bResearchDetailDebugDrawMarker = false;
    this->bResearchDetailInputEnable = true;
    this->ResearchDetailInputRange = 90.00f;
    this->ResearchDetailDebugDrawInputLength = 500.00f;
    this->bShowLocation = false;
    this->StartTelopPriority = 20;
    this->StartTelopWidget = NULL;
    this->FinishTelopPriority = 21;
    this->FinishTelopWidget = NULL;
    this->SpotSelectStartTelopPriority = 20;
    this->SpotSelectStartTelopWidget = NULL;
    this->SpotJudgePriority = 20;
    this->SpotJudgeWidget = NULL;
    this->GetKagiPriority = 5100;
    this->GetKagiWidget = NULL;
    this->bMarkerEnable = false;
    this->bMarker3D = false;
    this->Marker3DScale = 0.20f;
    this->MarkerScale = 1.00f;
    this->bMarkerHiddenByTrace = false;
    this->bAccessableMarkerHiddenByTrace = false;
    this->MarkerMaxNum = 20;
    this->UsingMarkerNum = 0;
    this->bMarkerName2Test = true;
    this->bMarkerNameMoveDebugDraw = false;
    this->bMarkerNameBasePositionCamera = false;
    this->MarkerNameBasePositionOffset = 150.00f;
    this->MarkerNameMoveDistanceZUp = 100.00f;
    this->MarkerNameMoveDistanceZDown = 100.00f;
    this->MarkerMoveLocationZUp = 0.00f;
    this->MarkerMoveLocationZDown = 0.00f;
    this->MarkerNameAvoidCircleRudius = 150.00f;
    this->MarkerNameMoveSpeed = 2.30f;
    this->bMarkerNameMoveSimple = false;
    this->bMarkerNameMoveSimpleFixedDistance = true;
    this->MarkerNameMoveSimpleFixedDistanceUp = 100.00f;
    this->MarkerNameMoveSimpleFixedDistanceDown = 100.00f;
    this->PointerState = ERCAdvHUDWidgetState::None;
    this->PointerOldState = ERCAdvHUDWidgetState::None;
    this->PointerRequest = ERCAdvHUDWidgetRequest::None;
    this->PointerPriority = 10;
    this->PointerWidget = NULL;
    this->SoftwareCursor = NULL;
    this->BufferCursor = NULL;
    this->FPSCameraLimitWidget = NULL;
    this->FPSCameraLimitPriority = 11;
    this->QuestionTextPriority = 15;
    this->QuestionTextWidget = NULL;
    this->EndButtonGuidePriority = 12;
    this->EndButtonGuideWidget = NULL;
}

bool URCAdvHUDResearchComponent::StartTelopStart() {
    return false;
}

bool URCAdvHUDResearchComponent::StartTelopCheckFinished() {
    return false;
}

bool URCAdvHUDResearchComponent::SpotSelectStartTelopStart() {
    return false;
}

bool URCAdvHUDResearchComponent::SpotSelectStartTelopCheckFinished() {
    return false;
}

bool URCAdvHUDResearchComponent::SpotJudgeTelopMistakeStart() {
    return false;
}

bool URCAdvHUDResearchComponent::SpotJudgeTelopCorrectStart() {
    return false;
}

void URCAdvHUDResearchComponent::SetMarkerEnable(bool bInEnable) {
}

bool URCAdvHUDResearchComponent::SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInNameDraw, bool bInResearched, bool bInAccessable, float InScale) {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchStartWithQuestionText(FName InQuestionTextID, bool bInEnableFinish, bool bInMiniMap) {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchStart(bool bInShowLocation, bool bInEnableFinish, bool bInMiniMap) {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchFinish() {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchDetailStart(FRCAdvHUDResearchDetailStartData InStartData, ERCAdvHUDResearchDetailType InType) {
    return false;
}

ERCAdvHUDResearchDetailType URCAdvHUDResearchComponent::ResearchDetailGetType() {
    return ERCAdvHUDResearchDetailType::Normal;
}

int32 URCAdvHUDResearchComponent::ResearchDetailGetSelectIndex() {
    return 0;
}

int32 URCAdvHUDResearchComponent::ResearchDetailGetAccessedIndex() {
    return 0;
}

bool URCAdvHUDResearchComponent::ResearchDetailFinish() {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchDetailCheckAutoSelectMoveFinished() {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchDetailCheck() {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchDetailAutoSelectMoveStart(int32 InMarkerDataIndex) {
    return false;
}

bool URCAdvHUDResearchComponent::ResearchDetailAutoSelectCheckActorMoveStart(ARCCheckActor* InCheckActor) {
    return false;
}

void URCAdvHUDResearchComponent::OnMenuOpenMouseSettings() {
}

void URCAdvHUDResearchComponent::OnMenuCloseMouseSettings() {
}

void URCAdvHUDResearchComponent::OnChangeInputPlatform(ERCInputPlatform InInputPlatform) {
}

bool URCAdvHUDResearchComponent::LocationStart(FName InLocationID, FName InLocationTextID) {
    return false;
}

bool URCAdvHUDResearchComponent::LocationFinish() {
    return false;
}

bool URCAdvHUDResearchComponent::LocationCheckFinished() {
    return false;
}

bool URCAdvHUDResearchComponent::IsMarkerVisible(ARCCheckActor* InCheckActor) {
    return false;
}

ERCAdvHUDResearchModeState URCAdvHUDResearchComponent::GetResearchModeState() {
    return ERCAdvHUDResearchModeState::None;
}

ERCAdvHUDResearchModeState URCAdvHUDResearchComponent::GetResearchModeOldState() {
    return ERCAdvHUDResearchModeState::None;
}

int32 URCAdvHUDResearchComponent::GetMarkerDataNum() {
    return 0;
}

void URCAdvHUDResearchComponent::GetMarkerData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDResearchMarkerData& OutMarkerData) {
}

bool URCAdvHUDResearchComponent::GetKagiStart() {
    return false;
}

bool URCAdvHUDResearchComponent::GetKagiSetDataFromKagiID(FName InKagiID, int32 InPhase) {
    return false;
}

bool URCAdvHUDResearchComponent::GetKagiSetData_Debug(FName InKagiImage, const FString& InKagiName, const FString& InKagiCaption) {
    return false;
}

bool URCAdvHUDResearchComponent::GetKagiCheckFinished() {
    return false;
}

bool URCAdvHUDResearchComponent::FinishTelopStart() {
    return false;
}

bool URCAdvHUDResearchComponent::FinishTelopCheckFinished() {
    return false;
}


