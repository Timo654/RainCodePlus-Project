#include "RCNazoSceneData.h"

FRCNazoSceneData::FRCNazoSceneData() {
    this->State = ERCNazoLSASceneState::Invalid;
    this->LevelScriptActor = NULL;
    this->StartLoadLevelIndex = 0;
    this->TilingNum = 0;
    this->bNextSceneAutoLoadStart = false;
}

