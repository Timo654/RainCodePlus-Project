#include "RCNzUiAssistCutin.h"

URCNzUiAssistCutin::URCNzUiAssistCutin() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->Img_NzAssistCutIn_Face = NULL;
    this->bLoadingImage = false;
}

void URCNzUiAssistCutin::UninitializeAssistCutin() {
}

void URCNzUiAssistCutin::Open() {
}

void URCNzUiAssistCutin::InitializeAssistCutin(FSoftObjectPath InAssistImagePath) {
}

ERCNzUiAssistCutinStatus URCNzUiAssistCutin::GetAssistCutinStatus() {
    return ERCNzUiAssistCutinStatus::Idle;
}


