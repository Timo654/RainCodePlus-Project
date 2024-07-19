#include "RCNzUiBattleAssist.h"

URCNzUiBattleAssist::URCNzUiBattleAssist() {
    this->AN_Start = NULL;
    this->AN_Finish = NULL;
    this->AN_AssistBarMax = NULL;
    this->AN_AssistBarNormal = NULL;
    this->Img_AssistFace = NULL;
    this->AssistBar_Mask = NULL;
    this->WBP_ButtonGuide = NULL;
    this->bLoadingImage = false;
}

void URCNzUiBattleAssist::UninitializeBattleAssist() {
}

void URCNzUiBattleAssist::SetAssistGauge(float InAssistGauge, float InAssistGaugeMax) {
}

void URCNzUiBattleAssist::Open() {
}

void URCNzUiBattleAssist::InitializeBattleAssist(FSoftObjectPath InFaceImagePath) {
}

ERCNzUiBattleAssistStatus URCNzUiBattleAssist::GetBattleCutinStatus() {
    return ERCNzUiBattleAssistStatus::Idle;
}

void URCNzUiBattleAssist::Close() {
}


