#include "RCDevelopmentSave.h"

FRCDevelopmentSave::FRCDevelopmentSave() {
    this->SelectChapter = 0;
    this->SelectMapIDIndex = 0;
    this->bIsMoveSkip = false;
    this->bIsDash = false;
    this->SkipSpeed = 0.00f;
    this->bMouseCameraRightClick = false;
    this->bDebugLoadAssetDraw = false;
    this->bTipsLoadDraw = false;
    this->bRealPlChange = false;
    this->bMapMoveNotRealPlChange = false;
    this->bNazoPreLoad = false;
    this->bNazoReuseLevelInvisible = false;
    this->bDebugPause = false;
    this->bHarfFade = false;
    this->bUseUiFade = false;
    this->bInputLeverDebugDraw = false;
    this->bHpNoDead = false;
    this->bAutoMove = false;
    this->bConsoleDetails = false;
    this->bMouseCursolDraw = false;
    this->bFinaleSkipEnable = false;
    this->bBattleFastLoad = false;
    this->bRealFastLoad = false;
}

