#include "RCVariableGameMenuCharacterInfo.h"

FRCVariableGameMenuCharacterInfo::FRCVariableGameMenuCharacterInfo() {
    this->CharacterCategory = ERCCharacterInfoCategory::CCTantei_Main;
    this->bNew = false;
    this->bUpdate = false;
    this->Phase = 0;
    this->bPlayDead = false;
}

