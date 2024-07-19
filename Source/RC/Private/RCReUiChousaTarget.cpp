#include "RCReUiChousaTarget.h"

URCReUiChousaTarget::URCReUiChousaTarget() {
    this->bUseTimeOfMaterial = true;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_OnSelection = NULL;
    this->AN_OffSelection = NULL;
    this->bIsInvestigated = false;
    this->bIsAccessible = false;
    this->bIsSelectClose = false;
}

void URCReUiChousaTarget::StartSelect() {
}

void URCReUiChousaTarget::Open(bool bInIsInvestigated) {
}

void URCReUiChousaTarget::InitializeChousaTarget() {
}

float URCReUiChousaTarget::GetWidgetRadius() {
    return 0.0f;
}

void URCReUiChousaTarget::FinishSelect() {
}

void URCReUiChousaTarget::Close() {
}


