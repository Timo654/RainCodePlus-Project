#include "RCNzMTB_FortActorBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ARCNzMTB_FortActorBase::ARCNzMTB_FortActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->WallHP = 0;
    this->IntervalVoiceDistance = 0.00f;
    this->WallVoiceDistance = 500.00f;
    this->WallShowDistance = 300.00f;
    this->CanAttackDistance = 0.00f;
    this->Box->SetupAttachment(RootComponent);
}

void ARCNzMTB_FortActorBase::PlayTextVoice(ARCCharacterRender* InChara, FName VoiceID) {
}

void ARCNzMTB_FortActorBase::PlayFortTextVoice(ARCCharacterRender* InChara) {
}

bool ARCNzMTB_FortActorBase::LoadParamData(FName SceneID) {
    return false;
}

bool ARCNzMTB_FortActorBase::CheckAnswerKaikagiID(FName InKaiKagiID) {
    return false;
}



