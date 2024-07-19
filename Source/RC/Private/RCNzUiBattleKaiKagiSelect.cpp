#include "RCNzUiBattleKaiKagiSelect.h"

URCNzUiBattleKaiKagiSelect::URCNzUiBattleKaiKagiSelect() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_Next = NULL;
    this->AN_Prev = NULL;
    this->bKaiKagiSelectBar2 = true;
    this->WBP_NzKaikagi_BTNGuideDecision = NULL;
    this->WBP_NzKaikagiDetail = NULL;
    this->bReverseInput = false;
    this->bReverseNextAndPrev = true;
    this->ChoiceNum = 5;
    this->PriorityUseChoiceNoArray.AddDefaulted(5);
    this->PriorityTextChoiceNoArray.AddDefaulted(5);
    this->SelectChoiceNo = 0;
    this->SelectChoiceIndexInTextChoiceNoArray = -1;
    this->bKaiKagiDataLoading = false;
    this->SelectIndex = 0;
    this->bLoadingImage = false;
    this->bMenuEnableAtStart = false;
    this->bLoopEnable = false;
    this->bPauseEnable = false;
}

UWidget* URCNzUiBattleKaiKagiSelect::UpAndDown(EUINavigation InNavigation) {
    return NULL;
}

void URCNzUiBattleKaiKagiSelect::UninitializeBattleKaiKagiSelect() {
}

bool URCNzUiBattleKaiKagiSelect::SelectKaiKagi(int32 InSelectIndex, bool bStart) {
    return false;
}

void URCNzUiBattleKaiKagiSelect::SelectDeteil() {
}

void URCNzUiBattleKaiKagiSelect::Open() {
}

bool URCNzUiBattleKaiKagiSelect::KaiKagiSelectStart2(TArray<FName> InKaiKagiIDArray, TArray<FName> InDeleteKaiKagiIDArray, int32 InSelectIndex) {
    return false;
}

bool URCNzUiBattleKaiKagiSelect::KaiKagiSelectStart(TArray<FName> InKaiKagiIDArray, int32 InSelectIndex) {
    return false;
}

void URCNzUiBattleKaiKagiSelect::InitializeBattleKaiKagiSelect() {
}

int32 URCNzUiBattleKaiKagiSelect::GetSelectIndex() {
    return 0;
}

ERCNzUiBattleKaiKagiSelectStatus URCNzUiBattleKaiKagiSelect::GetBattleKaiKagiSelectStatus() {
    return ERCNzUiBattleKaiKagiSelectStatus::Idle;
}

void URCNzUiBattleKaiKagiSelect::Decide() {
}

void URCNzUiBattleKaiKagiSelect::Close() {
}


