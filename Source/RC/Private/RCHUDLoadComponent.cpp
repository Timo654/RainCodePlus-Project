#include "RCHUDLoadComponent.h"

URCHUDLoadComponent::URCHUDLoadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FaderHUD = NULL;
    this->bInitialized = false;
    this->bLoadStarted = false;
    this->bLoadAllWBPsCompleted = false;
    this->bLoadingWidgetsCompleted = false;
}


