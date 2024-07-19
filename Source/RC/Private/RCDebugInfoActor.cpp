#include "RCDebugInfoActor.h"

ARCDebugInfoActor::ARCDebugInfoActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainQuestPhase = 0;
    this->TotalTanteiPoint = 0;
    this->TanteiRank = 0;
    this->bIsPlayerMove = false;
    this->AllMapInfo = NULL;
    this->bTopMenuAccess = false;
    this->TopMenuType = ERCGameMenuType::Real;
    this->bDrawWorldMap = false;
    this->bPlayerUnknown = false;
    this->bFastTravel = false;
    this->bWorldMapAccess = false;
    this->bKaikagiMenuAccess = false;
    this->bQuestMenuAccess = false;
    this->bCharacterInfoMenuAccess = false;
    this->bGlossaryMenuAccess = false;
    this->bSubLevelLoadEnd = false;
    this->InstanceCharacterActorNum = 0;
    this->InstancePawnActorNum = 0;
    this->NowCharacterActorNum = 0;
    this->NowPawnActorNum = 0;
    this->NowKakiwariActorNum = 0;
}


