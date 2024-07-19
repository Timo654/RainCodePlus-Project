#include "RCTimerInfo.h"

FRCTimerInfo::FRCTimerInfo() {
    this->EndMillSeconds = 0.00f;
    this->Progress = 0.00f;
    this->ExecTimeMillSeconds = 0.00f;
    this->Scale = 0.00f;
    this->bExec = false;
    this->bPause = false;
    this->bPauseStrart = false;
    this->bCoundDown = false;
    this->bTimeManager = false;
}

