#include "RCLevelScriptActor.h"

ARCLevelScriptActor::ARCLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bParsistant = false;
}

void ARCLevelScriptActor::LoadAssets(const TArray<TSoftClassPtr<UObject>>& InAssets) {
}


