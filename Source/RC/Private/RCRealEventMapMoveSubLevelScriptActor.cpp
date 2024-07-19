#include "RCRealEventMapMoveSubLevelScriptActor.h"

ARCRealEventMapMoveSubLevelScriptActor::ARCRealEventMapMoveSubLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEventThrough = false;
}

void ARCRealEventMapMoveSubLevelScriptActor::SetEventThrough() {
}

bool ARCRealEventMapMoveSubLevelScriptActor::IsEventThrough() {
    return false;
}

FName ARCRealEventMapMoveSubLevelScriptActor::GetMapMoveTriggerName() {
    return NAME_None;
}

void ARCRealEventMapMoveSubLevelScriptActor::ClearEventThrough() {
}


