#include "RCNazoLoopLevelScriptActor.h"

ARCNazoLoopLevelScriptActor::ARCNazoLoopLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NazoLSA = NULL;
    this->bInitialized = false;
}

bool ARCNazoLoopLevelScriptActor::IsInitialized() {
    return false;
}


