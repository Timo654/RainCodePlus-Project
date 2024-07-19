#include "RCNazoPlayableLoopLevelScriptActor.h"

ARCNazoPlayableLoopLevelScriptActor::ARCNazoPlayableLoopLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = ERCNazoPlayableLoopLSAState::None;
    this->bWarp = false;
    this->bFinishedWarpNextFrame = false;
    this->WarpFinishedCount = 0;
    this->bRequestOpenFrontWall = false;
    this->bRequestCloseBehindWall = false;
    this->bRequestFinishLoop = false;
}


bool ARCNazoPlayableLoopLevelScriptActor::Warp() {
    return false;
}

bool ARCNazoPlayableLoopLevelScriptActor::OpenFrontWall() {
    return false;
}

int32 ARCNazoPlayableLoopLevelScriptActor::GetWarpCount() {
    return 0;
}

bool ARCNazoPlayableLoopLevelScriptActor::FinishLoop() {
    return false;
}

bool ARCNazoPlayableLoopLevelScriptActor::CloseBehindWall() {
    return false;
}

bool ARCNazoPlayableLoopLevelScriptActor::CheckFinishedBehindWallClosed() {
    return false;
}



