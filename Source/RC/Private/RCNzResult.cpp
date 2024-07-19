#include "RCNzResult.h"

URCNzResult::URCNzResult() {
    this->AN_Start = NULL;
    this->AN_Evalute1_In = NULL;
    this->AN_Evalute1_Rank = NULL;
    this->AN_Evalute2_In = NULL;
    this->AN_Evalute2_Rank = NULL;
    this->AN_Evalute3_In = NULL;
    this->AN_Evalute3_Rank = NULL;
    this->AN_Evalute4_In = NULL;
    this->AN_Evalute4_Rank = NULL;
    this->AN_Evalute5_In = NULL;
    this->AN_Evalute5_Rank = NULL;
    this->AN_BonusPoints_In = NULL;
    this->AN_AddPoints_In = NULL;
    this->AN_Menu_In = NULL;
    this->AN_All_Wait = NULL;
    this->AN_Detail_On = NULL;
    this->AN_Detail_Off = NULL;
    this->AN_Finish = NULL;
    this->Canvas_Bonus = NULL;
    this->OL_AddPoints = NULL;
    this->Text_BasePoint = NULL;
    this->Text_BonusPoint = NULL;
    this->Text_AddPoint = NULL;
    this->Text_BasePoint_Label = NULL;
    this->Text_BonusPoint_Label = NULL;
    this->Text_BasePoint_Label_1 = NULL;
    this->ResultRankCalculator = NULL;
    this->StateType = ERCNzResultStateType::ResultState_None;
    this->ResultType = ERCNzResultType::ResultType_NzResult;
}

void URCNzResult::_OnDetailWrap(ERCInputKeyType InKeyType) {
}

void URCNzResult::_OffDetailWrap(ERCInputKeyType InKeyType) {
}

void URCNzResult::_CloseResultWrap(ERCInputKeyType InKeyType) {
}


