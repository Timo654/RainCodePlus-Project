#include "RCCheckActor.h"

ARCCheckActor::ARCCheckActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugScriptDraw = false;
    this->UIType = ERCRealCheckActorType::Research;
    this->bCheck = false;
    this->bCheckIcon = true;
    this->bPlayerLookEnable = true;
    this->bAreaMoveStop = false;
    this->ResearchVisionType = ERCRealCheckActorResearchVisionTimeType::All;
    this->FigureNum = 0;
    this->CheckNameLength = 300.00f;
    this->CheckIconLength = 600.00f;
    this->bCheckNameCenter = false;
    this->CheckNameHeightOffset = 0.00f;
    this->IconScale = 1.00f;
    this->VariableArrayNum = -1;
    this->VariableCheckNum = -1;
    this->bCheckFinish = false;
    this->bCheckNameDraw = false;
    this->bCheckIconDraw = false;
    this->bCheckEnable = false;
    this->PlayerLength = 0.00f;
    this->QuestType = ERCActorQuestType::None;
}

void ARCCheckActor::SetResearchVisionType(ERCRealCheckActorResearchVisionTimeType InResearchVisionType) {
}

void ARCCheckActor::SetNextPlayerStartName(FName InPlayerStartName) {
}

void ARCCheckActor::SetNextMapID(FName InMapID) {
}

void ARCCheckActor::SetFigurePersonID(FName InFigurePersonID) {
}

void ARCCheckActor::SetFigureNum(int32 InFigureNum) {
}

void ARCCheckActor::SetCheckSetting(bool bInCheck) {
}

void ARCCheckActor::SetCheckNameTextId(FName InTextID) {
}

void ARCCheckActor::SetCheckIconSetting(bool bInCheckIcon) {
}

void ARCCheckActor::SetCheckFinish(bool bInCheck) {
}

void ARCCheckActor::SetAreaMoveStop(bool bInAreaMoveStop) {
}

bool ARCCheckActor::IsCheckSetting() {
    return false;
}

bool ARCCheckActor::IsCheckIconSetting() {
    return false;
}

bool ARCCheckActor::IsCheckFinish() {
    return false;
}

bool ARCCheckActor::IsAreaMoveStop() {
    return false;
}

ERCRealCheckActorResearchVisionTimeType ARCCheckActor::GetResearchVisionType() {
    return ERCRealCheckActorResearchVisionTimeType::All;
}

FName ARCCheckActor::GetNextPlayerStartName() {
    return NAME_None;
}

FName ARCCheckActor::GetNextMapID() {
    return NAME_None;
}

FName ARCCheckActor::GetFigurePersonID() {
    return NAME_None;
}

int32 ARCCheckActor::GetFigureNum() {
    return 0;
}

FName ARCCheckActor::GetCheckNameTextId() {
    return NAME_None;
}


