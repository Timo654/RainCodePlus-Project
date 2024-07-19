#include "RCNzUiFinalePieceList_PieceBase.h"

URCNzUiFinalePieceList_PieceBase::URCNzUiFinalePieceList_PieceBase() {
    this->isDone = false;
    this->CurrentPieceState = EFinalePieceState::UnSelect;
    this->isUnlock = false;
    this->ownerLayout = NULL;
    this->Angle = 0.00f;
}


void URCNzUiFinalePieceList_PieceBase::UpdatePiece(FRCNzFinalePieceObjectInfo Info) {
}








void URCNzUiFinalePieceList_PieceBase::InitializePiece(FRCNzFinalePieceObjectInfo Info, URCNzUiFinalePieceLayoutWidget* Owner) {
}

FVector2D URCNzUiFinalePieceList_PieceBase::GetPieceWBPSize() {
    return FVector2D{};
}




float URCNzUiFinalePieceList_PieceBase::GetPieceDegree() {
    return 0.0f;
}

EFinalePieceState URCNzUiFinalePieceList_PieceBase::GetCurrentPieceState() {
    return EFinalePieceState::UnSelect;
}

bool URCNzUiFinalePieceList_PieceBase::CheckCurrentPieceState(EFinalePieceState targetState) {
    return false;
}


