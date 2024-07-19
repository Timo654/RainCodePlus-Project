#include "RCCharacterAttachmentCtrl.h"

URCCharacterAttachmentCtrl::URCCharacterAttachmentCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = EAttachState::Non;
    this->AttachPlaceEnum = NULL;
    this->CharacterBase = NULL;
    this->PawnBase = NULL;
    this->ReadPriorily = ERCAssetPriority::Hi;
}


