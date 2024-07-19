#include "RCSaveGameManager.h"

URCSaveGameManager::URCSaveGameManager() {
    this->Status = ERCSaveLoadStatus::None;
    this->SaveDevelopmentData = NULL;
    this->SaveSystemData = NULL;
    this->SaveGameData = NULL;
    this->UserIndex = 0;
    this->LastAutoSaveNum = -1;
    this->AutoSaveNum = 0;
    this->SaveNum = 0;
    this->LastSaveDataType = ERCSaveDataType::AutoSaveData;
    this->LastSaveNum = 0;
    this->bSystemSaveLoad = false;
    this->bDemoSavedata = false;
    this->bMargeDemoSavedata = false;
    this->bResultError = false;
    this->bUpdateExec = false;
    this->RCResult = ERCSaveLoadErrorType::CheckOK;
}


