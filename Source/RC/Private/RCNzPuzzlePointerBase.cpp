#include "RCNzPuzzlePointerBase.h"

URCNzPuzzlePointerBase::URCNzPuzzlePointerBase() {
    this->AN_UnSelect = NULL;
    this->AN_Select = NULL;
    this->AN_Select_Kaikagi = NULL;
    this->AN_Drag_Kaikagi = NULL;
    this->AN_Select_Hint = NULL;
    this->AN_Block = NULL;
    this->pointerSize = 0.00f;
    this->isKaikagiSelected = false;
    this->currentType = EPuzzlePointerHoverType::UnSelect;
}

void URCNzPuzzlePointerBase::SetHover(EPuzzlePointerHoverType Type) {
}

void URCNzPuzzlePointerBase::InitializePuzzlePointer() {
}

bool URCNzPuzzlePointerBase::CheckHoverType(EPuzzlePointerHoverType Type) {
    return false;
}


