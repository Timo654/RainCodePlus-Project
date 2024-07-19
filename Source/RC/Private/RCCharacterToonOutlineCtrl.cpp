#include "RCCharacterToonOutlineCtrl.h"

URCCharacterToonOutlineCtrl::URCCharacterToonOutlineCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoOutlineWidth = true;
    this->OutlineWidth = 0.20f;
    this->CurrentOutlineWidth = 0.20f;
    this->OutlineWidthMax = 0.20f;
    this->OutlineWidthMin = 0.01f;
    this->OutlineWidthMaxCameraDistance = 10.00f;
    this->OutlineWidthMinCameraDistance = 500.00f;
    this->FoVCoefficient = 80.00f;
    this->OwnerCharacter = NULL;
    this->OwnerPawn = NULL;
}


