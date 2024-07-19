#include "RCRealEventCheckSubLevelScriptActor.h"

ARCRealEventCheckSubLevelScriptActor::ARCRealEventCheckSubLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEventThrough = false;
}

void ARCRealEventCheckSubLevelScriptActor::SetEventThrough() {
}

bool ARCRealEventCheckSubLevelScriptActor::IsEventThrough() {
    return false;
}

FName ARCRealEventCheckSubLevelScriptActor::GetCheckActorName() {
    return NAME_None;
}

void ARCRealEventCheckSubLevelScriptActor::ClearEventThrough() {
}


