#include "RCNzUiBattleCutin.h"

URCNzUiBattleCutin::URCNzUiBattleCutin() {
    this->AN_Hajiki = NULL;
    this->AN_Assist = NULL;
    this->AN_Ronpa = NULL;
    this->Img_Assist_Face = NULL;
    this->bLoadingImage = false;
}

void URCNzUiBattleCutin::UninitializeBattleCutin() {
}

void URCNzUiBattleCutin::Open(ERCNzUiBattleCutinType InType) {
}

void URCNzUiBattleCutin::InitializeBattleCutin(FSoftObjectPath InAssistImagePath) {
}

ERCNzUiBattleCutinStatus URCNzUiBattleCutin::GetBattleCutinStatus() {
    return ERCNzUiBattleCutinStatus::Idle;
}


