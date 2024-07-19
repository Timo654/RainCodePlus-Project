#include "RCNzUiChousaFinish.h"

URCNzUiChousaFinish::URCNzUiChousaFinish() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->AN_Finish = NULL;
    this->AN_Wait = NULL;
}

void URCNzUiChousaFinish::OpenChousaFinish() {
}

bool URCNzUiChousaFinish::IsFinished() {
    return false;
}

int32 URCNzUiChousaFinish::GetNzChousaFinishPriority() {
    return 0;
}

void URCNzUiChousaFinish::CloseChousaFinish() {
}


