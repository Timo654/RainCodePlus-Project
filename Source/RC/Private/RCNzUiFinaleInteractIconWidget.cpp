#include "RCNzUiFinaleInteractIconWidget.h"

URCNzUiFinaleInteractIconWidget::URCNzUiFinaleInteractIconWidget() {
    this->successFlag = false;
    this->isCorrected = false;
    this->CollisionScale = 0.90f;
    this->isPlayInOutAnimation = false;
    this->PieceImg = NULL;
    this->isUseFixedPosition = false;
    this->isFinishStartAnim = false;
}

void URCNzUiFinaleInteractIconWidget::UpdateBackgroundImage_Implementation(UTexture2D* tex) {
}

void URCNzUiFinaleInteractIconWidget::SetPieceData_IsPick(bool isPick) {
}

void URCNzUiFinaleInteractIconWidget::SetIsCorrectFlag(bool Val) {
}







void URCNzUiFinaleInteractIconWidget::PlayFinishQuestionAnim_Implementation(bool isSuccess) {
}




void URCNzUiFinaleInteractIconWidget::InitializeInteractIconWidget(FRCNzFinaleGamePieceData Data) {
}

FVector2D URCNzUiFinaleInteractIconWidget::GetQuestionTextFixedPosition() {
    return FVector2D{};
}

FString URCNzUiFinaleInteractIconWidget::GetPieceText() {
    return TEXT("");
}

UTexture2D* URCNzUiFinaleInteractIconWidget::GetPieceImg() {
    return NULL;
}

FName URCNzUiFinaleInteractIconWidget::GetPieceID() {
    return NAME_None;
}

FString URCNzUiFinaleInteractIconWidget::GetPieceDetailText() {
    return TEXT("");
}

bool URCNzUiFinaleInteractIconWidget::GetPieceData_IsPick() {
    return false;
}

FRCNzFinaleGamePieceData URCNzUiFinaleInteractIconWidget::GetPieceData() {
    return FRCNzFinaleGamePieceData{};
}

bool URCNzUiFinaleInteractIconWidget::GetIsUseFixedPosition() {
    return false;
}

bool URCNzUiFinaleInteractIconWidget::GetIsPlayInOutAnimationFlag() {
    return false;
}

bool URCNzUiFinaleInteractIconWidget::GetIsFinishStartAnim() {
    return false;
}

bool URCNzUiFinaleInteractIconWidget::GetisCorrectFlag() {
    return false;
}


float URCNzUiFinaleInteractIconWidget::GetColScale() {
    return 0.0f;
}

FString URCNzUiFinaleInteractIconWidget::GetBackgroundImagePath(ARCNzFinaleManagerBase* FinaleManager) {
    return TEXT("");
}

FName URCNzUiFinaleInteractIconWidget::GetAnswerID() {
    return NAME_None;
}


