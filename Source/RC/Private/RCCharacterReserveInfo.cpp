#include "RCCharacterReserveInfo.h"

FRCCharacterReserveInfo::FRCCharacterReserveInfo() {
    this->bStartLoopMotion = false;
    this->AnimalIdleMotionIndex = 0;
    this->AnimalActionMotionIndex = 0;
    this->bAnimalNearPlayerHide = false;
    this->LengthAnimalVisibleMin = 0.00f;
    this->LengthAnimalVisibleMax = 0.00f;
    this->LengthAnimalAction = 0.00f;
}

