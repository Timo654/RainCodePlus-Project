#include "RCVariableGameMenuTopSelectInfo.h"

FRCVariableGameMenuTopSelectInfo::FRCVariableGameMenuTopSelectInfo() {
    this->Type = ERCGameMenuSelectType::Top;
    this->bNew = false;
    this->bUpdate = false;
    this->KaikagiStatus = ERCGameMenuKaikagiStatus::None;
    this->Status = ERCGameMenuStatus::Enable;
}

