#include "RCPlayerSave.h"

FRCPlayerSave::FRCPlayerSave() {
    this->bPlayerMove = false;
    this->PlayerYaw = 0.00f;
    this->PlayerGameMode = ERCRealPlayerGameMode::FreeMove;
    this->bReserchExit = false;
    this->PlayerMoveSpeedType = ERCPlayerMoveSpeedType::Run;
    this->ShinigamiYaw = 0.00f;
    this->ShinigamiAiEmotionType = ERCShinigamiEmotionType::Normal;
    this->bVisibleCompanion = false;
    this->bRainDraw = false;
}

