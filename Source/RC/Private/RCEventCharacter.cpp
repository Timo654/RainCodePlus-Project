#include "RCEventCharacter.h"

ARCEventCharacter::ARCEventCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMeshName = TEXT("Body");
    this->EyeSkeletalMesh = NULL;
    this->bAutoHairSpecular = false;
    this->HairSpecularX = 0.00f;
    this->HairSpecularY = 0.00f;
    this->HairSpecularZ = 1.00f;
}

USkeletalMeshComponent* ARCEventCharacter::GetEyeSkeletalMesh() const {
    return NULL;
}

URCCharacterAnimCtrl* ARCEventCharacter::GetAnimCtrl() {
    return NULL;
}


