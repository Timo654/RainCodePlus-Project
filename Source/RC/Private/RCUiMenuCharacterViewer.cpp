#include "RCUiMenuCharacterViewer.h"

URCUiMenuCharacterViewer::URCUiMenuCharacterViewer() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->CurrentCharacterPhase = 0;
    this->bButtonGuideVisible = false;
}

void URCUiMenuCharacterViewer::OnButtonGuideClickEvent(ERCInputKeyType KeyType) {
}


