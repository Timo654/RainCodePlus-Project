#include "RCCheckActorBFL.h"

URCCheckActorBFL::URCCheckActorBFL() {
}

void URCCheckActorBFL::SetCheckSettings(const FString& InActorName, bool bInCheck) {
}

void URCCheckActorBFL::SetCheckSetting(FName InName, bool bInCheck) {
}

void URCCheckActorBFL::SetCheckFinish(FName InName, bool bInCheck) {
}

void URCCheckActorBFL::SetAreaMoveStop(FName InName, bool bInAreaMoveStop) {
}

void URCCheckActorBFL::SetAllAreaMoveMainQuestFlag() {
}

bool URCCheckActorBFL::IsCheckSetting(FName InName) {
    return false;
}

bool URCCheckActorBFL::IsCheckFinish(FName InName) {
    return false;
}

bool URCCheckActorBFL::IsAreaMoveStop(FName InName) {
    return false;
}

ARCCheckActor* URCCheckActorBFL::GetCheckActor(FName InName) {
    return NULL;
}


