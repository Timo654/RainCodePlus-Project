#include "RCNzUiFinalePGLayoutWidget.h"

URCNzUiFinalePGLayoutWidget::URCNzUiFinalePGLayoutWidget() {
    this->CurrentPageIdx = 0;
    this->BtnGuidePartsL = NULL;
    this->BtnGuidePartsR = NULL;
}

void URCNzUiFinalePGLayoutWidget::UpdatePageGuide(TArray<EPageGuideType> PageList) {
}

void URCNzUiFinalePGLayoutWidget::OnButtonGuideClick(ERCInputKeyType KeyType) {
}

void URCNzUiFinalePGLayoutWidget::MovePage_Implementation(const int32 targetIdx) {
}

void URCNzUiFinalePGLayoutWidget::InitializePGLayoutWidget(TArray<EPageGuideType> PageList) {
}

bool URCNzUiFinalePGLayoutWidget::InitializeButtonGuide(ERCInputKeyType keyL, ERCInputKeyType keyR) {
    return false;
}

void URCNzUiFinalePGLayoutWidget::GetPGLayoutLocationAndSize(FVector2D& Location, FVector2D& Size) {
}


