#include "RCNazoSceneSettingsPLN.h"

FRCNazoSceneSettingsPLN::FRCNazoSceneSettingsPLN() {
    this->bAutoSave = false;
    this->PlayerDamage = 0;
    this->PlayerRecover = 0;
    this->bMoveLoopReverse = false;
    this->PlayerMoveSpeed = 0.00f;
    this->bCameraFollowPlayer = false;
    this->TalkType = ERCNazoMoveLoopTalkType::None;
    this->TalkDataTable = NULL;
    this->bTalkFinishWithMoveLoop = false;
    this->bPlayableLoop = false;
}

