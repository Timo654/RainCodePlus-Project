#include "RCUiMenuCharacterSelect.h"

URCUiMenuCharacterSelect::URCUiMenuCharacterSelect() {
    this->AN_On = NULL;
    this->AN_Off = NULL;
    this->AN_SlideIn_L = NULL;
    this->AN_SlideIn_R = NULL;
    this->AN_SlideOut_L = NULL;
    this->AN_SlideOut_R = NULL;
    this->CurrentSlideType = ERCUiMenuCharacterSelectSlideType::None;
    this->FaceVisibleCount = 0;
    this->ContactCharacterCategoryNumber = 0;
    this->ContactUpperCharacterFaceNum = 0;
    this->ContactRowerCharacterFaceNum = 0;
    this->CurrentFocusFaceIndex = 0;
    this->CurrentFocusRowType = ERCUiMenuCharacterSelectRowType::Up;
    this->ParentWidget = NULL;
}

void URCUiMenuCharacterSelect::StartPush() {
}

void URCUiMenuCharacterSelect::CharacterSelectButtonCustomNavigation(EUINavigation InNavigation, APlayerController* InPlayerController) {
}


