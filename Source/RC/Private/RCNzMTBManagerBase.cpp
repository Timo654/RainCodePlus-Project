#include "RCNzMTBManagerBase.h"

ARCNzMTBManagerBase::ARCNzMTBManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneID = TEXT("TEST");
    this->Wall2WallInterval = 700.00f;
    this->Wall2TorideInterval = 1200.00f;
    this->MoveSpeed = 600.00f;
    this->AccelSpeed = 2048.00f;
    this->WallCount = 0;
    this->IsEndHalfway = false;
    this->IsTutorialScene = false;
    this->MissDamage = 100.00f;
    this->DTTalkEvent_Normal = NULL;
    this->DTTalkEvent_Miss = NULL;
    this->ResultCount_MissKaikagi = 0;
    this->ResultCount_MissAttack = 0;
    this->IsEnableMoveSkip = false;
    this->IsEvaluationVersion = true;
    this->IsUseLoopEventVersion = false;
}

bool ARCNzMTBManagerBase::SetDamage(int32 InDamage, int32& OldHP, int32& NewHP) {
    return false;
}

void ARCNzMTBManagerBase::SendResultData() {
}

void ARCNzMTBManagerBase::LoadDataTable() {
}

void ARCNzMTBManagerBase::IncrementResultData_AttackMiss() {
}

void ARCNzMTBManagerBase::IncrementResultData() {
}

int32 ARCNzMTBManagerBase::GetHP() {
    return 0;
}


void ARCNzMTBManagerBase::DebugSetMaxVolumeMode(bool Enable) {
}


void ARCNzMTBManagerBase::ChangeKaikagiList(FName NewKaikagiListID) {
}

bool ARCNzMTBManagerBase::AddKaikagi(FName NewKaikagiID) {
    return false;
}


