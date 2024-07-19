#include "RCNzUiFinaleDetectiveImageWidget.h"
#include "Templates/SubclassOf.h"

URCNzUiFinaleDetectiveImageWidget::URCNzUiFinaleDetectiveImageWidget() {
    this->RLParent = NULL;
    this->LRParent = NULL;
    this->LLParent = NULL;
    this->RRParent = NULL;
    this->RLPageWidget = NULL;
    this->RRPageWidget = NULL;
    this->LRPageWidget = NULL;
    this->LLPageWidget = NULL;
}

void URCNzUiFinaleDetectiveImageWidget::StartPageTurn() {
}

void URCNzUiFinaleDetectiveImageWidget::SetRightPage(TSubclassOf<UUserWidget> pageClass, const TArray<FRCNzUiFinaleInteractImgInfo>& PieceImgList) {
}

void URCNzUiFinaleDetectiveImageWidget::SetLeftPage(TSubclassOf<UUserWidget> pageClass, const TArray<FRCNzUiFinaleInteractImgInfo>& PieceImgList) {
}

void URCNzUiFinaleDetectiveImageWidget::ResetPageWidget() {
}



void URCNzUiFinaleDetectiveImageWidget::InitializeDetectiveImageWidget() {
}

void URCNzUiFinaleDetectiveImageWidget::AddChildRR_Implementation(UUserWidget* targetWidget) {
}

void URCNzUiFinaleDetectiveImageWidget::AddChildRL_Implementation(UUserWidget* targetWidget) {
}

void URCNzUiFinaleDetectiveImageWidget::AddChildLR_Implementation(UUserWidget* targetWidget) {
}

void URCNzUiFinaleDetectiveImageWidget::AddChildLL_Implementation(UUserWidget* targetWidget) {
}


