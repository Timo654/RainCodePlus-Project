#include "RCEventTrigger.h"

ARCEventTrigger::ARCEventTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugScriptDraw = false;
    this->bOtherPlayer = true;
    this->bCollisionEnable = true;
    this->QuestType = ERCActorQuestType::None;
    this->VariableArrayNum = -1;
    this->VariableCheckNum = -1;
    this->bInPlayer = false;
}

void ARCEventTrigger::SetOtherPlayer(bool bInOtherPlayer) {
}

void ARCEventTrigger::SetOtherActorName(FName bName) {
}

void ARCEventTrigger::SetCollisionEnable(bool bInEnable) {
}

void ARCEventTrigger::OnActorEndOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARCEventTrigger::OnActorBeginOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor) {
}

bool ARCEventTrigger::IsOtherPlayer() {
    return false;
}

bool ARCEventTrigger::IsCollisionEnable() {
    return false;
}

FName ARCEventTrigger::GetOtherActorName() {
    return NAME_None;
}


