#include "RCCharacterFormCtrl.h"

URCCharacterFormCtrl::URCCharacterFormCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = EFormState::Non;
    this->bDecalProcess = true;
    this->bUmbrellaShadowProcess = true;
    this->ReadPriorily = ERCAssetPriority::Hi;
    this->CharacterBase = NULL;
    this->PawnBase = NULL;
    this->OwnerSkeletalMeshComponent = NULL;
    this->FormPartTypeEnum = NULL;
    this->MobQuality = ERCOptionMobQuality::MobLv0_Normal;
}


