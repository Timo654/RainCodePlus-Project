#include "RCNzUiChousaStart.h"

URCNzUiChousaStart::URCNzUiChousaStart() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->AN_Finish = NULL;
    this->AN_Wait = NULL;
}

void URCNzUiChousaStart::OpenChousaStart() {
}

bool URCNzUiChousaStart::IsFinished() {
    return false;
}

int32 URCNzUiChousaStart::GetNzChousaStartPriority() {
    return 0;
}

void URCNzUiChousaStart::CloseChousaStart() {
}


