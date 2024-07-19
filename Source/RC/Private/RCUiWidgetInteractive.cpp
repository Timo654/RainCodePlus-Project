#include "RCUiWidgetInteractive.h"

URCUiWidgetInteractive::URCUiWidgetInteractive() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_OnSelection = NULL;
    this->AN_OffSelection = NULL;
    this->AN_OnSelection_Start = NULL;
    this->AN_OnSelection_Finish = NULL;
    this->AN_Close_Start = NULL;
    this->AN_Close_Wait = NULL;
    this->AN_Close_Finish = NULL;
    this->AN_Close_OnSelection = NULL;
    this->AN_Close_OffSelection = NULL;
    this->AN_Close_OnSelection_Start = NULL;
    this->AN_Close_OnSelection_Finish = NULL;
    this->bIsAccessible = false;
}

void URCUiWidgetInteractive::WaitOutside() {
}

void URCUiWidgetInteractive::StartSelectable() {
}

void URCUiWidgetInteractive::OpenSelectable(bool bInMoveable) {
}

void URCUiWidgetInteractive::Open(bool bInMoveable) {
}

void URCUiWidgetInteractive::InitializeInteractIcon() {
}

void URCUiWidgetInteractive::InitAnimKey() {
}

int32 URCUiWidgetInteractive::GetInteractStatusInt() {
    return 0;
}

void URCUiWidgetInteractive::FinishSelectable() {
}

void URCUiWidgetInteractive::CloseSelectable() {
}

void URCUiWidgetInteractive::Close() {
}


