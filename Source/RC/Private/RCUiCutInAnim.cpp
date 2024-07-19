#include "RCUiCutInAnim.h"

URCUiCutInAnim::URCUiCutInAnim() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_Anim1 = NULL;
    this->AN_Wait1 = NULL;
    this->AN_Anim2 = NULL;
    this->AN_Wait2 = NULL;
    this->AN_Anim3 = NULL;
    this->AN_Wait3 = NULL;
    this->AN_Anim4 = NULL;
    this->AN_Wait4 = NULL;
}

void URCUiCutInAnim::SetAnimSpeedRate(float InAnimSpeedRate) {
}

void URCUiCutInAnim::Open() {
}

bool URCUiCutInAnim::IsFinishContAnim() {
    return false;
}

void URCUiCutInAnim::InitializeCutIn() {
}

void URCUiCutInAnim::Close() {
}

void URCUiCutInAnim::ChangeWidgetAnim() {
}


