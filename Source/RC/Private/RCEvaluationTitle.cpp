#include "RCEvaluationTitle.h"

URCEvaluationTitle::URCEvaluationTitle() {
    this->WBP_StartEvaluationVersion_New = NULL;
    this->WBP_StartEvaluationVersion_Load = NULL;
    this->WBP_StartEvaluationVersion_Walk = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->SelectIndex = 0;
    this->State = EEvaluationTitleState::INITIALIZE;
    this->selectResult = ETITLE_SELECT::NONE;
    this->isCancel = false;
}

void URCEvaluationTitle::PlayWaitAnimation() {
}

void URCEvaluationTitle::PlayStartAnimation() {
}

void URCEvaluationTitle::PlayFinishAnimation() {
}

void URCEvaluationTitle::Open() {
}

void URCEvaluationTitle::InitializeData() {
}


