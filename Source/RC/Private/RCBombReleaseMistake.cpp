#include "RCBombReleaseMistake.h"

URCBombReleaseMistake::URCBombReleaseMistake() {
    this->AN_On_Start = NULL;
    this->AN_Finish = NULL;
    this->AN_Off = NULL;
    this->isStartAnimation = false;
    this->isFinishAnimation = false;
}

void URCBombReleaseMistake::StartAnimation() {
}

void URCBombReleaseMistake::OffAnimation() {
}

bool URCBombReleaseMistake::IsFinishedAnimation() {
    return false;
}

void URCBombReleaseMistake::FinishAnimation() {
}


