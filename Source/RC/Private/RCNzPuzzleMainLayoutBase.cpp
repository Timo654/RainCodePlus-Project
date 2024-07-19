#include "RCNzPuzzleMainLayoutBase.h"

URCNzPuzzleMainLayoutBase::URCNzPuzzleMainLayoutBase() {
    this->HintBalloonR = NULL;
    this->HintBalloonL = NULL;
    this->currentHoverHintBalloon = NULL;
    this->Pointer = NULL;
    this->AnswerLayout = NULL;
    this->question = NULL;
    this->TimelimitAlert = NULL;
    this->TimeLimit = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->MoveSpeed = 2.00f;
    this->ButtonGuideWidget = NULL;
}

void URCNzPuzzleMainLayoutBase::WaitingOpen() {
}

void URCNzPuzzleMainLayoutBase::SynchronizeToInputPlatform(ERCInputPlatform InputPlatform) {
}

void URCNzPuzzleMainLayoutBase::StartUI() {
}

void URCNzPuzzleMainLayoutBase::StartAlert() {
}

void URCNzPuzzleMainLayoutBase::ShowHint(const int32 KaikagiNum, const FText HintText, const FName hintVoiceID) {
}

void URCNzPuzzleMainLayoutBase::ShowButtonGuide() {
}

void URCNzPuzzleMainLayoutBase::SetWordListNum(int32 Length) {
}

void URCNzPuzzleMainLayoutBase::SetTimeLimit(float Time) {
}

void URCNzPuzzleMainLayoutBase::SetQuestion(const FText wordText) {
}

void URCNzPuzzleMainLayoutBase::SetHoverPointer(EPuzzlePointerHoverType Type) {
}

void URCNzPuzzleMainLayoutBase::SetAnswer(int32 wordPos, FName wordText, UTexture2D* wordTexture) {
}

bool URCNzPuzzleMainLayoutBase::PointerMove(float DeltaTime, float Aspect) {
    return false;
}

void URCNzPuzzleMainLayoutBase::PlayHint() {
}

void URCNzPuzzleMainLayoutBase::InitializePuzzleMainLayout() {
}

void URCNzPuzzleMainLayoutBase::HideButtonGuide() {
}

void URCNzPuzzleMainLayoutBase::GetWidget3DLocAndDir(const UWidget* Widget, FVector& Location, FVector& Direction) {
}

void URCNzPuzzleMainLayoutBase::GetPointerScreenPositionAlpha(float& PositionX, float& PositionY) {
}

void URCNzPuzzleMainLayoutBase::GetPointerScreenPosition(float& PositionX, float& PositionY) {
}

FVector URCNzPuzzleMainLayoutBase::GetPointerMoveDistance() {
    return FVector{};
}

void URCNzPuzzleMainLayoutBase::GetPointerLocation(FVector& Location, FVector& Direction) {
}

TArray<FVector2D> URCNzPuzzleMainLayoutBase::GetHintBalloonBox(URCNzPuzzleHintBalloonBase* Widget, bool isLeft) {
    return TArray<FVector2D>();
}

bool URCNzPuzzleMainLayoutBase::CheckPointerHoverType(EPuzzlePointerHoverType Type) {
    return false;
}

void URCNzPuzzleMainLayoutBase::CheckIsHoverCursorToHintBalloon() {
}

bool URCNzPuzzleMainLayoutBase::CalcIsHoverCursor(FMargin Offsets, FVector2D Size, FVector2D halfViewportSize, FVector2D cursorPos, bool isLeft) {
    return false;
}


