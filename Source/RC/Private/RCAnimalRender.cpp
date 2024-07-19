#include "RCAnimalRender.h"

ARCAnimalRender::ARCAnimalRender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAnimalAction = false;
    this->ActionHierarchicalInstancedMesh = NULL;
    this->IdleHierarchicalInstancedMesh = NULL;
    this->bSwitchMesh = false;
    this->IdleMotionIndex = 0;
    this->ActionMotionIndex = 0;
    this->bAnimalNearPlayerHide = false;
    this->LengthAnimalVisibleMin = 300.00f;
    this->LengthAnimalVisibleMax = 1500.00f;
    this->LengthAnimalAction = 400.00f;
    this->ActiveAnimalVisibleOffSec = 5.00f;
    this->ActiveAnimalVisibleOffCurrentSec = 0.00f;
    this->ActiveAnimalVisibleOffDurationSec = 0.00f;
    this->bAnimalVisibleFlag = true;
}


