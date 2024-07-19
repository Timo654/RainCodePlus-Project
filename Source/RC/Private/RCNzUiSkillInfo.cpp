#include "RCNzUiSkillInfo.h"

URCNzUiSkillInfo::URCNzUiSkillInfo() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
}

void URCNzUiSkillInfo::StartSkillInfo(FName ID, float StartOffsetTime, float InFinishWaitTime, bool bInFinishSE) {
}

void URCNzUiSkillInfo::SetWaitTime(float sec) {
}

bool URCNzUiSkillInfo::IsFinished() const {
    return false;
}


