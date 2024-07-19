#include "RCNzFinalePieceBase.h"

ARCNzFinalePieceBase::ARCNzFinalePieceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PieceType = 0;
    this->isComplete = false;
}

void ARCNzFinalePieceBase::InitializeFinalePiece_Implementation(const FString& ImagePath, const int32& Type, const FName& NameTextID, const FName& TextID, const FName& NewAnswerID, const FName& NewPieceID) {
}

FName ARCNzFinalePieceBase::GetAnswerPieceID() {
    return NAME_None;
}

void ARCNzFinalePieceBase::CompletePiece_Implementation() {
}

bool ARCNzFinalePieceBase::CheckPieceID(FName TargetID) {
    return false;
}


