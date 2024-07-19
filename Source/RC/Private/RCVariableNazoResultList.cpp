#include "RCVariableNazoResultList.h"

FRCVariableNazoResultList::FRCVariableNazoResultList() {
    this->Chapter = 0;
    this->Rank = ERCNzResultRankValue::Rank_C;
    this->HpRank = ERCNzResultRankValue::Rank_C;
    this->RewardPoint = 0;
    this->Point = 0;
    this->OldHiScoreRank = ERCNzResultRankValue::Rank_C;
    this->OldHiRewardPoint = 0;
    this->OldHiPoint = 0;
    this->ContinueCount = 0;
}

