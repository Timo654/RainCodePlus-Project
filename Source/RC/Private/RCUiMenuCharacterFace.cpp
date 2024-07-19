#include "RCUiMenuCharacterFace.h"

URCUiMenuCharacterFace::URCUiMenuCharacterFace() {
    this->AN_Alive_Def = NULL;
    this->AN_Alive_OnCursor = NULL;
    this->AN_Alive_OnCursor_Wait = NULL;
    this->AN_Alive_OutCursor = NULL;
    this->AN_Alive_Push = NULL;
    this->AN_Alive_Off = NULL;
    this->AN_Dead_Start = NULL;
    this->AN_Dead_Def = NULL;
    this->AN_Dead_OnCursor = NULL;
    this->AN_Dead_OnCursor_Wait = NULL;
    this->AN_Dead_OutCursor = NULL;
    this->AN_Dead_Push = NULL;
    this->AN_Dead_Off = NULL;
    this->Text_CharaName_00 = NULL;
    this->Text_CharaName_01 = NULL;
    this->CurrentAliveType = ERCUiMenuCharacterAliveType::Character_Alive;
    this->CurrentTransType = ERCUiMenuCharacterTransType::Character_Wait;
    this->CharacterFace = NULL;
}

void URCUiMenuCharacterFace::_Push() {
}


