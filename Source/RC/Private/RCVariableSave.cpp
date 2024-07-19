#include "RCVariableSave.h"

FRCVariableSave::FRCVariableSave() {
    this->StoryMode = ERCStoryMode::Original;
    this->MainQuestPhase = 0;
    this->BusStopStatus = ERCRealEventMapConnectStatus::None;
    this->bDrawDisableSubQuest = false;
    this->SpiritMiniGameCheckPointNumber = 0;
}

