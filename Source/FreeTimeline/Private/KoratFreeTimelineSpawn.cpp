#include "KoratFreeTimelineSpawn.h"

AKoratFreeTimelineSpawn::AKoratFreeTimelineSpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreeTimeline = NULL;
    this->PlayerActor = NULL;
    this->bRebind = true;
    this->bOverrideAttachParam = false;
    this->TestBlastSkill1SequenceData = NULL;
    this->TestAuraSequenceData = NULL;
    this->TestMuzulleSequenceData = NULL;
    this->PreTimelinePlayType = EKoratFreeTimelinePlayType::None;
    this->SequenceActor = NULL;
    this->SequenceData = NULL;
    this->CancelSequenceData = NULL;
}


