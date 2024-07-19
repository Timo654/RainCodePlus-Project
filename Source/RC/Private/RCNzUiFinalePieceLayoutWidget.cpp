#include "RCNzUiFinalePieceLayoutWidget.h"

URCNzUiFinalePieceLayoutWidget::URCNzUiFinalePieceLayoutWidget() {
    this->PieceName = NULL;
    this->PieceDetail = NULL;
    this->AN_Start = NULL;
    this->AN_Finish = NULL;
    this->AN_Default = NULL;
    this->isPieceListVisible = false;
    this->PieceListPieceNum = 0;
    this->RockNumTexturePath = TEXT("/Game/RC/UI/NzUI/NzFinale/NzFinale_Piece/T_UI_NzFinalePiece_Num");
    this->SmallRockNumTexturePath = TEXT("/Game/RC/UI/NzUI/NzFinale/NzFinale_PieceList/T_UI_NzFinalePieceList_s_Num");
    this->BtnGuideParts = NULL;
    this->ButtonGuideBaseImage = NULL;
    this->isHoverdPieceList = false;
    this->PieceLockImgNum = 13;
    this->UnlockAnimPlayPieceListIdx = 0;
    this->delayUnlockAnimTiming = 0.20f;
}

void URCNzUiFinalePieceLayoutWidget::WaitingOpen() {
}



void URCNzUiFinalePieceLayoutWidget::UdpatePieceLayoutBtnGuide(ERCInputKeyType KeyType) {
}

void URCNzUiFinalePieceLayoutWidget::StartUnlockAnimPieceSlist(TArray<int32> pieceList) {
}

void URCNzUiFinalePieceLayoutWidget::StartUnlockAnimPieceList(TArray<int32> pieceList) {
}

void URCNzUiFinalePieceLayoutWidget::StartOpen() {
}

void URCNzUiFinalePieceLayoutWidget::StartFinish() {
}

void URCNzUiFinalePieceLayoutWidget::SetIsHoverdPieceList(bool Val) {
}

void URCNzUiFinalePieceLayoutWidget::SetDelayUnLockAnimTime(float Time) {
}




FRCNzFinalePieceObjectInfo URCNzUiFinalePieceLayoutWidget::LoadPieceImage(ARCNzFinaleManagerBase* FinaleManager, FRCNzFinalePieceObjectInfo targetInfo, bool isSmall) {
    return FRCNzFinalePieceObjectInfo{};
}

bool URCNzUiFinalePieceLayoutWidget::IsVisiblePieceList() {
    return false;
}


void URCNzUiFinalePieceLayoutWidget::InitializePieceLayout() {
}

UTexture2D* URCNzUiFinalePieceLayoutWidget::GetRockNumTexture(int32 RockNum, bool isSmall) {
    return NULL;
}

TArray<int32> URCNzUiFinalePieceLayoutWidget::GetPlayUnlockAnimPieceLList(bool& Result) {
    return TArray<int32>();
}







FVector2D URCNzUiFinalePieceLayoutWidget::GetPieceLCenterPosition(int32 ind) const {
    return FVector2D{};
}


bool URCNzUiFinalePieceLayoutWidget::GetIsHoverdPieceList() {
    return false;
}





void URCNzUiFinalePieceLayoutWidget::CallChangeSelectPieceDelegate(FRCNzFinalePieceObjectInfo Info, bool isUnlock) {
}


