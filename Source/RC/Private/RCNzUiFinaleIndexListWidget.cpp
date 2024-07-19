#include "RCNzUiFinaleIndexListWidget.h"

URCNzUiFinaleIndexListWidget::URCNzUiFinaleIndexListWidget() {
    this->sectionList1 = NULL;
    this->sectionList2 = NULL;
    this->currentSelectIndex = -1;
    this->IndexSizeY = 0.00f;
    this->IndexSizeX = 0.00f;
    this->IndexMaxNum = 7;
    this->OneLineIndexMaxNum = 7;
    this->SectionUIPath = TEXT("/Game/RC/UI/NzUI/NzFinale/NzIndexSection/WBP_NzIndexSection.WBP_NzIndexSection_C");
    this->isInitialize = false;
    this->FinaleManager = NULL;
    this->isIndexList02 = false;
}

void URCNzUiFinaleIndexListWidget::UpdateSelectIndexWidget(int32 targetIdx) {
}

void URCNzUiFinaleIndexListWidget::UpdateSectionDetectivePointState(ARCNzFinaleManagerBase* NewFinaleManager) {
}

void URCNzUiFinaleIndexListWidget::UpdateIndexList(FRCParamNzFinaleSectionTableRow Section, int32 idx, ARCNzFinaleManagerBase* NewFinaleManager) {
}

void URCNzUiFinaleIndexListWidget::SetVisibleSectionList(bool IsVisible) {
}

void URCNzUiFinaleIndexListWidget::ResetSelectIndexWidget() {
}

void URCNzUiFinaleIndexListWidget::MovePrevSection() {
}

void URCNzUiFinaleIndexListWidget::MoveNextSection() {
}

bool URCNzUiFinaleIndexListWidget::IsExsitTargteIdxSection(int32 targetIdx) {
    return false;
}

bool URCNzUiFinaleIndexListWidget::IsExistTargetSectionTextIDIndex(FName TargetID, int32& lastIdx) {
    return false;
}

bool URCNzUiFinaleIndexListWidget::IsExistPrevSection() {
    return false;
}

bool URCNzUiFinaleIndexListWidget::IsExistNextSection() {
    return false;
}

bool URCNzUiFinaleIndexListWidget::IsCurrentSection() {
    return false;
}

bool URCNzUiFinaleIndexListWidget::IsCompleteInitialize() {
    return false;
}

void URCNzUiFinaleIndexListWidget::InitializeFinaleIndexListWidget() {
}

FName URCNzUiFinaleIndexListWidget::GetTargetIndexSectionID(int32 idx) {
    return NAME_None;
}



bool URCNzUiFinaleIndexListWidget::GetIsIndex02Flag() {
    return false;
}

FMargin URCNzUiFinaleIndexListWidget::GetIndexMargin(int32 idx) {
    return FMargin{};
}

TArray<URCNzUiFinaleHeadingTextWidget*> URCNzUiFinaleIndexListWidget::GetIndexList() {
    return TArray<URCNzUiFinaleHeadingTextWidget*>();
}

FString URCNzUiFinaleIndexListWidget::GetCurrentSelectSetionID() {
    return TEXT("");
}

void URCNzUiFinaleIndexListWidget::GetCurrentSectionText(int32& SectionIdx, FString& sectionTitle) {
}

FString URCNzUiFinaleIndexListWidget::GetCurrentSectionPieceUIPath() {
    return TEXT("");
}

int32 URCNzUiFinaleIndexListWidget::GetCurentSelectSectionIndex() {
    return 0;
}

void URCNzUiFinaleIndexListWidget::DebugShowIndexSection(FVector2D UL, FVector2D ur, FVector2D dl, FVector2D dr, int32 idx) {
}


