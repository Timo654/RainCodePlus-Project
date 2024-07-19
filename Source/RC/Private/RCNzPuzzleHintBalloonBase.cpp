#include "RCNzPuzzleHintBalloonBase.h"

URCNzPuzzleHintBalloonBase::URCNzPuzzleHintBalloonBase() {
    this->HintText = NULL;
    this->decoImg = NULL;
}


void URCNzPuzzleHintBalloonBase::ShowHint(const FText Text, const FName NewVoiceID) {
}

void URCNzPuzzleHintBalloonBase::SetWidgetPosition(FVector2D NewPosition) {
}

void URCNzPuzzleHintBalloonBase::PlayHint() {
}

void URCNzPuzzleHintBalloonBase::InitializePuzzleHintBalloon() {
}

bool URCNzPuzzleHintBalloonBase::CheckCursorHover(FVector2D cursorPos) {
    return false;
}


