#include "RCLevelStreamingDynamic.h"

URCLevelStreamingDynamic::URCLevelStreamingDynamic() {
    this->bInitiallyLoaded = false;
    this->bInitiallyVisible = false;
}

void URCLevelStreamingDynamic::UnLoadLevelInstance(UObject* WorldContextObject, URCLevelStreamingDynamic* StreamingLevel, bool& bOutSuccess) {
}

URCLevelStreamingDynamic* URCLevelStreamingDynamic::LoadLevelInstance(UObject* WorldContextObject, const FString& LevelName, bool bInInitiallyVisible, bool& bOutSuccess) {
    return NULL;
}


