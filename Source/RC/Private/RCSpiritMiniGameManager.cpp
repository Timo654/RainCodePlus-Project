#include "RCSpiritMiniGameManager.h"

ARCSpiritMiniGameManager::ARCSpiritMiniGameManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpiritNiagaraActor = NULL;
    this->bSpiritNiagaraActorFollowCamera = false;
    this->CurrentCheckPoint = ERCSpiritMiniGameCheckPointType::CheckPoint_A;
    this->bHitWanderingSpirit = false;
}


