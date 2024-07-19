#include "RCNzUiFinaleHeadingTextWidget.h"

URCNzUiFinaleHeadingTextWidget::URCNzUiFinaleHeadingTextWidget() {
    this->FinaleManager = NULL;
    this->SectionIdx = 0;
}







void URCNzUiFinaleHeadingTextWidget::UpdateDebugDrawLine(const TArray<FVector2D>& Points) {
}

void URCNzUiFinaleHeadingTextWidget::InitializeHeadingTextWidget(FName NewSectionID, FName NewTextID, ARCNzFinaleManagerBase* NewFinaleManager, int32 idx, const FString& uiPath) {
}

FName URCNzUiFinaleHeadingTextWidget::GetSectionTextID() {
    return NAME_None;
}

int32 URCNzUiFinaleHeadingTextWidget::GetSectionIdx() {
    return 0;
}

FName URCNzUiFinaleHeadingTextWidget::GetSectionID() {
    return NAME_None;
}



FString URCNzUiFinaleHeadingTextWidget::GetDetectiveUIPath() {
    return TEXT("");
}


