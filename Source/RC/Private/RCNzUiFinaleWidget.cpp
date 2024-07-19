#include "RCNzUiFinaleWidget.h"

URCNzUiFinaleWidget::URCNzUiFinaleWidget() {
    this->Timer = NULL;
    this->Alert = NULL;
    this->PieceLayout = NULL;
    this->PageMoveLayout = NULL;
    this->PieceGet = NULL;
    this->PieceCorrect = NULL;
    this->HeadingClear = NULL;
    this->IndexClear = NULL;
    this->QuestionRest = NULL;
    this->QuestionLayout = NULL;
    this->HPBar = NULL;
    this->QuestionWidget = NULL;
    this->IndexListWidget = NULL;
    this->IndexListParentWidget = NULL;
    this->DetectiveTitleWidget = NULL;
    this->PieceQuestion = NULL;
    this->KomaDetailUI = NULL;
    this->PieceDetailWidget = NULL;
    this->PGLayoutWidget = NULL;
    this->IndexBtnGuide = NULL;
    this->LowSpeedBtnGuide = NULL;
    this->InteractIconWidgetClass = NULL;
    this->isIndex02 = false;
    this->isPieceCorrectFlag = false;
    this->AN_Incorrect = NULL;
    this->AN_Start = NULL;
    this->AN_Finish = NULL;
    this->LockPieceNameStr = TEXT("LockPiece");
}

void URCNzUiFinaleWidget::UpdateSelectedPieceIdx(int32 idx) {
}



bool URCNzUiFinaleWidget::UpdatePieceListBtnGuide(ERCInputKeyType Key) {
    return false;
}


bool URCNzUiFinaleWidget::UpdatePageGuideBtnGuide(ERCInputKeyType keyL, ERCInputKeyType keyR) {
    return false;
}

bool URCNzUiFinaleWidget::UpdateLowSpeedBtnGuide(ERCInputKeyType kye, const FString& str) {
    return false;
}

bool URCNzUiFinaleWidget::UpdateIndexBtnGuide(ERCInputKeyType InKeyType, const FString& str) {
    return false;
}

void URCNzUiFinaleWidget::UpdateHPBar(float Hp) {
}

void URCNzUiFinaleWidget::UpdateDetectiveTitle(const int32& Section, const FString& Title) {
}

bool URCNzUiFinaleWidget::UpdateCursorBtnGuide(ERCInputKeyType Key, bool IsVisible) {
    return false;
}

void URCNzUiFinaleWidget::StartInCorrect() {
}

void URCNzUiFinaleWidget::StartCorrect() {
}

void URCNzUiFinaleWidget::ShowQuestionFinishAnimation(const FVector2D& Position, bool isSuccess) {
}

void URCNzUiFinaleWidget::SetVisiblityDetectiveTitleUI(bool IsVisible) {
}


void URCNzUiFinaleWidget::SetVisibleIndexBtnGuide(bool IsVisible) {
}

void URCNzUiFinaleWidget::SetVisibleHPBar(bool IsVisible) {
}




void URCNzUiFinaleWidget::SetTime(float Time) {
}

void URCNzUiFinaleWidget::SetSectionText(const FString& sectionText1, const FString& sectionText2) {
}

void URCNzUiFinaleWidget::SetQuestionRestNum(int32 Num) {
}

void URCNzUiFinaleWidget::SetPageMoveDirIconVisiblity(EPageMoveVisibleDirection Visiblity) {
}

void URCNzUiFinaleWidget::SetIsHoverdPieceList(bool Val) {
}

void URCNzUiFinaleWidget::SetDelayUnLockAnimTime(float Time) {
}



void URCNzUiFinaleWidget::PlayStartAnimation() {
}



void URCNzUiFinaleWidget::PlayIncorrectAnim() {
}


void URCNzUiFinaleWidget::PlayFinishAnimation() {
}

void URCNzUiFinaleWidget::PlayDoneAnimPieceDetail() {
}


void URCNzUiFinaleWidget::PlayApplyBlock_Lock() {
}

void URCNzUiFinaleWidget::PlayApplyBlock_Done() {
}



void URCNzUiFinaleWidget::PieceIncorrectFinishedEvent() {
}

void URCNzUiFinaleWidget::PieceGetEvent() {
}

void URCNzUiFinaleWidget::PieceDetailFinishUnLockEvent() {
}

void URCNzUiFinaleWidget::PieceDetailFinishApplyStartEvent() {
}

void URCNzUiFinaleWidget::PieceDetailFinishApplyFinishEvent() {
}

void URCNzUiFinaleWidget::PieceDetailFinishApplyBlock_LockEvent() {
}

void URCNzUiFinaleWidget::PieceDetailFinishApplyBlock_DoneEvent() {
}

void URCNzUiFinaleWidget::PieceCorrectFinishedEvent() {
}

void URCNzUiFinaleWidget::PieceCorrectEvent() {
}

void URCNzUiFinaleWidget::OpenPieceSelectWindow() {
}


void URCNzUiFinaleWidget::MoveIndexScene() {
}

void URCNzUiFinaleWidget::MoveHeading() {
}

void URCNzUiFinaleWidget::MoveDetectiveScene() {
}

void URCNzUiFinaleWidget::MoveDetectiveConstruct(TArray<bool> isCheckList) {
}




bool URCNzUiFinaleWidget::IsDetailPieceListMode() {
    return false;
}

bool URCNzUiFinaleWidget::IsDebugDrawFlag() {
    return false;
}



void URCNzUiFinaleWidget::InitializeIndexList(const FString& chNumStr) {
}

void URCNzUiFinaleWidget::InitializeHPBar(float HpMax) {
}

void URCNzUiFinaleWidget::InitializeFinaleUI() {
}

void URCNzUiFinaleWidget::IndexClearPlaySEEvent() {
}

void URCNzUiFinaleWidget::IndexClearFinishedEvent() {
}

void URCNzUiFinaleWidget::IndexClearEvent() {
}

void URCNzUiFinaleWidget::HeadingClearFinishedEvent() {
}

void URCNzUiFinaleWidget::HeadingClearEvent() {
}

URCNzUiFinaleQuestionWidget* URCNzUiFinaleWidget::GetQuestionWidget() {
    return NULL;
}

void URCNzUiFinaleWidget::GetPieceSLocationAndSize(int32 idx, FVector2D& Loc, FVector2D& Size) {
}

void URCNzUiFinaleWidget::GetPieceSListParentLocAndSize(FVector2D& Loc, FVector2D& Size) {
}

FVector2D URCNzUiFinaleWidget::GetPieceLListParentSize() {
    return FVector2D{};
}

FVector2D URCNzUiFinaleWidget::GetPieceListLScale() {
    return FVector2D{};
}

float URCNzUiFinaleWidget::GetPieceListLAngle() {
    return 0.0f;
}

TArray<URCNzUiFinalePieceList_PieceBase*> URCNzUiFinaleWidget::GetPieceListItemLArray() {
    return TArray<URCNzUiFinalePieceList_PieceBase*>();
}

URCNzUiFinalePGLayoutWidget* URCNzUiFinaleWidget::GetPGLayoutWidget() {
    return NULL;
}

void URCNzUiFinaleWidget::GetPGLayoutLocationAndSize(FVector2D& Location, FVector2D& Size) {
}

int32 URCNzUiFinaleWidget::GetOneLinePieceItemNum() {
    return 0;
}

bool URCNzUiFinaleWidget::GetIsHoverdPieceList() {
    return false;
}

URCNzUiFinaleIndexListWidget* URCNzUiFinaleWidget::GetIndexListWidget() {
    return NULL;
}

URCNzUiFinaleIndexListParentWidget* URCNzUiFinaleWidget::GetIndexListParentWidget() {
    return NULL;
}

FRCNzFinalePieceObjectInfo URCNzUiFinaleWidget::GetCurrentSelectPiece() {
    return FRCNzFinalePieceObjectInfo{};
}

int32 URCNzUiFinaleWidget::GetCurrentSelectedPieceIdx() {
    return 0;
}

void URCNzUiFinaleWidget::FinishedTimerBurnLightingAAnimation() {
}

void URCNzUiFinaleWidget::FinishedStartAnimation() {
}

void URCNzUiFinaleWidget::FinishedQuestionFinishAnimation(bool isSuccess) {
}

void URCNzUiFinaleWidget::FinishedFinishAnimation() {
}

void URCNzUiFinaleWidget::DirectingFinishedEvent() {
}



void URCNzUiFinaleWidget::ChangeSelectPieceEvent(const FString& PieceTitle, UTexture2D* PieceDetail, int32 isLock, bool isUsed, bool isUnlock) {
}



bool URCNzUiFinaleWidget::AddDamage(int32 NewAddDamage, int32& OutResultHP) {
    return false;
}


