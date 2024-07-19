#include "RCShinigamiFacialCtrl.h"

URCShinigamiFacialCtrl::URCShinigamiFacialCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBlink = false;
    this->BodyMorphBlend = NULL;
    this->HandMorphBlend = NULL;
    this->EyeBackOffMorphBlend = NULL;
    this->EyebrowBackOffMorphBlend = NULL;
    this->MouthBackOffMorphBlend = NULL;
    this->BodyBackOffMorphBlend = NULL;
    this->HandBackOffMorphBlend = NULL;
}


