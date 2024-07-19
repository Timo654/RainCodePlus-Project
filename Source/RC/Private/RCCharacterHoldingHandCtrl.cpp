#include "RCCharacterHoldingHandCtrl.h"

URCCharacterHoldingHandCtrl::URCCharacterHoldingHandCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHoldingHand = false;
    this->HoldingHandCharacter = NULL;
    this->CharacterBase = NULL;
    this->PawnBase = NULL;
}


