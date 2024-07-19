#include "RCNzUiSkillInfoList.h"

URCNzUiSkillInfoList::URCNzUiSkillInfoList() {
    this->StartOffsetTime = 0.11f;
    this->bAllFinishFlag = true;
    this->FinishWaitTime = 0.30f;
}

bool URCNzUiSkillInfoList::StartShowSkillInfoList(const TArray<FName>& IdList) {
    return false;
}

bool URCNzUiSkillInfoList::IsFinished() const {
    return false;
}

void URCNzUiSkillInfoList::FinishSkilInfoList() {
}


