#include "RCVariableGameMenuTopMenuInfo.h"

FRCVariableGameMenuTopMenuInfo::FRCVariableGameMenuTopMenuInfo() {
    this->bAccess = false;
    this->MenuType = ERCGameMenuType::Real;
    this->bTanteiPointDraw = false;
    this->bDrawWorldMap = false;
    this->bPlayerUnknown = false;
    this->MapM03IconType = ERCGameMenuMapM03IconType::Normal;
    this->MapM07IconType = ERCGameMenuMapM07IconType::Normal;
    this->PlayerIconType = ERCGameMenuPlayerIconType::CHR000;
    this->bFastTravel = false;
}

