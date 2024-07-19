#include "RCRealEventBFL.h"

URCRealEventBFL::URCRealEventBFL() {
}

bool URCRealEventBFL::IsBusStopEnable(FName InMapID) {
    return false;
}

ERCGameMode URCRealEventBFL::GetGameMode(int32 InChapter, FName InScene) {
    return ERCGameMode::Non;
}


