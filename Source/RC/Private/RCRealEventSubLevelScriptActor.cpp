#include "RCRealEventSubLevelScriptActor.h"

ARCRealEventSubLevelScriptActor::ARCRealEventSubLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectCursolIndex = -1;
    this->bRelease = false;
}

int32 ARCRealEventSubLevelScriptActor::GetSelectCursolIndex() {
    return 0;
}


