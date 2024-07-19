#include "RCAdvHUDInteractIconComponent.h"

URCAdvHUDInteractIconComponent::URCAdvHUDInteractIconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HUD = NULL;
    this->bInteractIconHiddenByTrace = false;
    this->AccessableWidgets1xDistance = 6.00f;
    this->AccessableWidgetsBasePriority = 0;
    this->AccessableWidgetPriority = 0;
    this->LastAccessedWidgetActor = NULL;
    this->bLastAccessedWidgetDelayCountFlag = false;
    this->LastAccessedWidgetDelayCount = 0.00f;
    this->Fake3DHiddenDistanceFromCamera = 100;
    this->AdvComponent = NULL;
    this->TalkComponent = NULL;
    this->ResearchComponent = NULL;
    this->MapComponent = NULL;
}

bool URCAdvHUDInteractIconComponent::PressedDecideButtonSimple() {
    return false;
}

ERCAdvHUDPressedDecideResult URCAdvHUDInteractIconComponent::PressedDecideButton() {
    return ERCAdvHUDPressedDecideResult::Failed;
}

bool URCAdvHUDInteractIconComponent::GetPressedDecideButtonSimpleResult(ERCAdvHUDPressedDecideResult InResult) {
    return false;
}

ARCPawnRender* URCAdvHUDInteractIconComponent::GetAccessedNPC() {
    return NULL;
}

ARCCheckActor* URCAdvHUDInteractIconComponent::GetAccessedCheckActor() {
    return NULL;
}

ARCCharacterRender* URCAdvHUDInteractIconComponent::GetAccessedCharacter() {
    return NULL;
}

bool URCAdvHUDInteractIconComponent::CheckAllAccessableWidgetsOpened() {
    return false;
}

bool URCAdvHUDInteractIconComponent::CheckAllAccessableWidgetsClosed(bool bInContainClosing) {
    return false;
}

bool URCAdvHUDInteractIconComponent::CheckAccessedWidgetWait() {
    return false;
}

bool URCAdvHUDInteractIconComponent::CheckAccessableWidgetReady() {
    return false;
}

void URCAdvHUDInteractIconComponent::AllAccessableWidgetsOpen() {
}

void URCAdvHUDInteractIconComponent::AllAccessableWidgetsClose() {
}


