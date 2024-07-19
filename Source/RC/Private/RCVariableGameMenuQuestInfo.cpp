#include "RCVariableGameMenuQuestInfo.h"

FRCVariableGameMenuQuestInfo::FRCVariableGameMenuQuestInfo() {
    this->QuestCategory = ERCQuestCategory::QTMainQuest;
    this->bNew = false;
    this->bUpdate = false;
    this->Phase = 0;
    this->Status = ERCGameMenuQuestStatus::None;
    this->SortNum = 0;
}

