#include "RCRealEventTalkSubLevelScriptActor.h"

ARCRealEventTalkSubLevelScriptActor::ARCRealEventTalkSubLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEventThrough = false;
}

void ARCRealEventTalkSubLevelScriptActor::SetEventThrough() {
}

bool ARCRealEventTalkSubLevelScriptActor::IsEventThrough() {
    return false;
}

FName ARCRealEventTalkSubLevelScriptActor::GetTalkCharacterName() {
    return NAME_None;
}

void ARCRealEventTalkSubLevelScriptActor::ClearEventThrough() {
}


