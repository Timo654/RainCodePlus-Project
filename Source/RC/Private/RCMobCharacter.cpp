#include "RCMobCharacter.h"
#include "Engine/EngineTypes.h"

ARCMobCharacter::ARCMobCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->AIControllerClass = NULL;
    this->bOnLoad = false;
    this->MobDefaultAnimationData = NULL;
    this->LoopMotionPlayStartPos = 1.00f;
    this->bCollision = true;
    this->bCull = false;
    this->bInit = false;
    this->bCurrentCollision = true;
    this->CurrentMobQuality = ERCOptionMobQuality::MobLv0_Normal;
    this->bSwitchedIntegration = false;
    this->ReadPriorily = ERCAssetPriority::Hi;
}

void ARCMobCharacter::Setup(FName InMobId) {
}

URCCharacterAnimCtrl* ARCMobCharacter::GetAnimCtrl() {
    return NULL;
}


