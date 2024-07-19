#include "RCBombReleaseGame.h"

URCBombReleaseGame::URCBombReleaseGame() {
    this->WBP_MG_Bomb_Answer_0 = NULL;
    this->WBP_MG_Bomb_Answer_1 = NULL;
    this->WBP_MG_Bomb_Answer_2 = NULL;
    this->WBP_MG_Bomb_Answer_3 = NULL;
    this->WBP_MG_Bomb_Answer_4 = NULL;
    this->WBP_MG_Bomb_Answer_5 = NULL;
    this->WBP_MG_Bomb_Timer = NULL;
    this->WBP_MG_Bomb_QuestionImage = NULL;
    this->WBP_MG_Bomb_IsMisstake = NULL;
    this->WBP_MG_Bomb_IsSuccess = NULL;
    this->AN_Start = NULL;
    this->AN_Finish = NULL;
    this->timeNum1 = NULL;
    this->timeNum2 = NULL;
    this->questionImage = NULL;
    this->messageImage = NULL;
    this->questionTime = 0.00f;
    this->selectQuestion = 0;
    this->selectVerticalMove = 2;
    this->selectWidthMove = 1;
    this->isCount = false;
}

void URCBombReleaseGame::SetSuccessVisible(bool IsVisible) {
}

void URCBombReleaseGame::SetMistakeVisible(bool IsVisible) {
}


