#include "RCNzUiFinaleDetectiveSceneWidget.h"

URCNzUiFinaleDetectiveSceneWidget::URCNzUiFinaleDetectiveSceneWidget() {
    this->backgroundImgScaleX = 0.00f;
    this->backgroundImgScaleY = 0.00f;
    this->initAnimIdx = 0;
    this->InOutAnimPlayListCount = 0;
    this->isUseInOutAnimFlag = false;
    this->IsInitialized = false;
}

void URCNzUiFinaleDetectiveSceneWidget::UpdatePieceImgInfo(const TArray<FRCNzUiFinaleInteractImgInfo>& PieceImgInfoList) {
}

void URCNzUiFinaleDetectiveSceneWidget::UpdatePieceImg(const TMap<FName, UTexture2D*> PieceImgList) {
}

void URCNzUiFinaleDetectiveSceneWidget::UpdatePieceData(const TArray<FRCNzFinaleGamePieceData>& pieceList) {
}




void URCNzUiFinaleDetectiveSceneWidget::SetBackgroundImgScale_Implementation(float ScaleX, float ScaleY) {
}

bool URCNzUiFinaleDetectiveSceneWidget::PlayStartAnim() {
    return false;
}

void URCNzUiFinaleDetectiveSceneWidget::PlayInitPieceList() {
}

bool URCNzUiFinaleDetectiveSceneWidget::PlayEndAnim() {
    return false;
}

bool URCNzUiFinaleDetectiveSceneWidget::IsUseInOutAnim() {
    return false;
}

void URCNzUiFinaleDetectiveSceneWidget::InteractStartFinished() {
}

void URCNzUiFinaleDetectiveSceneWidget::InteractEndFinished() {
}

void URCNzUiFinaleDetectiveSceneWidget::InitializeDetectiveScene() {
}


TMap<FName, UTexture2D*> URCNzUiFinaleDetectiveSceneWidget::GetPieceImgList() {
    return TMap<FName, UTexture2D*>();
}

TArray<FRCNzUiFinaleInteractImgInfo> URCNzUiFinaleDetectiveSceneWidget::GetPieceImgInfoList() {
    return TArray<FRCNzUiFinaleInteractImgInfo>();
}

TArray<FRCNzFinaleGamePieceData> URCNzUiFinaleDetectiveSceneWidget::GetInteractPieceDataList() {
    return TArray<FRCNzFinaleGamePieceData>();
}

TArray<FName> URCNzUiFinaleDetectiveSceneWidget::GetInteractIDList() {
    return TArray<FName>();
}

int32 URCNzUiFinaleDetectiveSceneWidget::GetInteractIconNum() {
    return 0;
}

TArray<URCNzUiFinaleInteractIconWidget*> URCNzUiFinaleDetectiveSceneWidget::GetInteractIconList() {
    return TArray<URCNzUiFinaleInteractIconWidget*>();
}

URCNzUiFinaleInteractIconWidget* URCNzUiFinaleDetectiveSceneWidget::GetCurrentDetectiveSceneInteractPointPos(bool& Result) {
    return NULL;
}

FVector2D URCNzUiFinaleDetectiveSceneWidget::GetBackgroundImgScale() {
    return FVector2D{};
}




