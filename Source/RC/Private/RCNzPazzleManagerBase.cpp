#include "RCNzPazzleManagerBase.h"

ARCNzPazzleManagerBase::ARCNzPazzleManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarrelActor = NULL;
    this->CameraActor = NULL;
    this->Damage = 10.00f;
    this->HpMax = 0.00f;
    this->Hp = 0.00f;
    this->SceneID = TEXT("00_5480");
    this->BarrelWordCount = 0;
    this->AnswerWordCount = 0;
    this->KaikagiReturnSpeed = 500.00f;
    this->CameraZoomInMaxDistance = 50.00f;
    this->CameraZoomOutMaxDistance = 50.00f;
    this->CameraZoomSpeed = 100.00f;
    this->MissDamage = 10.00f;
    this->BarrelRotateSpeed = 37.00f;
    this->LimitTime = 300.00f;
    this->AlertTime = 30.00f;
    this->HintDrawTime = 3.00f;
    this->bPuzzleClear = false;
    this->NowFocusIndex = 0;
    this->SkillNum_KaikagiDown = 0;
    this->SkillNum_WordDown = 0;
    this->SkillNum_Speed = 0;
    this->IsTutorialScene = false;
    this->ResultCount_MissAnswer = 0;
    this->ResultCount_MissKaikagi = 0;
    this->isBeginplay = false;
    this->ChangeSpeedInterval_Min = 0.00f;
    this->ChangeSpeedInterval_Max = 0.00f;
    this->ChangeSpeedIndex = 0;
    this->ChangeSpeedLastTimer = 0.00f;
    this->UseStartUI = false;
    this->BGTimeZone = EPuzzleTimeZoneType::MORNING;
}


void ARCNzPazzleManagerBase::SkillInfo_Start() {
}

void ARCNzPazzleManagerBase::SendResultData() {
}


void ARCNzPazzleManagerBase::LoadDataTable() {
}

int32 ARCNzPazzleManagerBase::InitializeBarrelWord() {
    return 0;
}


void ARCNzPazzleManagerBase::IncrementResultData_Kaikagi() {
}

void ARCNzPazzleManagerBase::IncrementResultData_Answer() {
}

FName ARCNzPazzleManagerBase::GetSceneIDFName() {
    return NAME_None;
}

void ARCNzPazzleManagerBase::GetKaikagiNameText(FName InKaiKagiID, FString& kaikagiNameText) {
}

void ARCNzPazzleManagerBase::GetKaikagiData(int32& listLength, TArray<FString>& kaikagiNameTextList, TArray<FString>& KaikagiTextList) {
}


