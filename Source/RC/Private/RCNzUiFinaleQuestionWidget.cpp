#include "RCNzUiFinaleQuestionWidget.h"

URCNzUiFinaleQuestionWidget::URCNzUiFinaleQuestionWidget() {
    this->Canvas = NULL;
    this->DetectiveImageWidget = NULL;
    this->PieceIconWidgetClass = NULL;
    this->DetectiveIconWidgetClass = NULL;
    this->CurrentShowDetectiveSceneIdx = -1;
    this->backImageWidget = NULL;
    this->DetectiveImageWidgetPath = TEXT("/Game/RC/UI/NzUI/NzFinale/NzFinale_DetectiveImage/WBP_DetectiveImage.WBP_DetectiveImage_C");
    this->tmpTargetSectionNum = 0;
}


void URCNzUiFinaleQuestionWidget::UpdatePiece(const TArray<FRCNzFinaleGamePieceData>& pieceList) {
}

bool URCNzUiFinaleQuestionWidget::UpdateBackgroundImg(const int32 targetSectionNum) {
    return false;
}

bool URCNzUiFinaleQuestionWidget::StartPlayPageMoveAnim(const int32 targetSectionNum, const EFinalePageMoveDirection dir) {
    return false;
}


void URCNzUiFinaleQuestionWidget::SetVisiblePiece(FName targetPieceID, bool visible) {
}

void URCNzUiFinaleQuestionWidget::SetIsPickPiece(FName targetPieceID, bool isPick) {
}


void URCNzUiFinaleQuestionWidget::InitializeFinaleQuestion() {
}

TArray<URCNzUiFinaleInteractIconWidget*> URCNzUiFinaleQuestionWidget::GetPieceList() {
    return TArray<URCNzUiFinaleInteractIconWidget*>();
}

int32 URCNzUiFinaleQuestionWidget::GetCurrentShowDetectiveSceneIdx() {
    return 0;
}

URCNzUiFinaleDetectiveSceneWidget* URCNzUiFinaleQuestionWidget::GetCurrentDetectiveScene() {
    return NULL;
}

void URCNzUiFinaleQuestionWidget::FinishedToRightAnim() {
}

void URCNzUiFinaleQuestionWidget::FinishedToLeftAnim() {
}

void URCNzUiFinaleQuestionWidget::FinishedInteractIconStartAnim() {
}

void URCNzUiFinaleQuestionWidget::CleanPiece() {
}

void URCNzUiFinaleQuestionWidget::AddInteractIconWidget(URCNzUiFinaleInteractIconWidget* Widget, FVector2D Position, bool isSuccess) {
}

void URCNzUiFinaleQuestionWidget::AddBackgroundImg(UTexture2D* tex) {
}


