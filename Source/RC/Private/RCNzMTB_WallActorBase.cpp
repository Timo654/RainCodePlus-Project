#include "RCNzMTB_WallActorBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ARCNzMTB_WallActorBase::ARCNzMTB_WallActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->box2 = CreateDefaultSubobject<UBoxComponent>(TEXT("beforeAttackInput"));
    this->box3 = CreateDefaultSubobject<UBoxComponent>(TEXT("showWall"));
    this->WallHP = 0;
    this->WeakPoint = EWallWeakPointType::UP;
    this->WallType = EWallType::NORMAL;
    this->IsFort = false;
    this->TextAlignment = EWallAlignmentType::Center;
    this->WallMesh = NULL;
    this->WallMotion = NULL;
    this->WallSkMeshNormal = NULL;
    this->WallSkMeshClack = NULL;
    this->WallSkMeshBreak = NULL;
    this->IntervalVoiceDistance = 0.00f;
    this->WallVoiceDistance = 500.00f;
    this->IsShowWallText = true;
    this->WallShowDistance = 300.00f;
    this->SlowDistance = 300.00f;
    this->LoopDistance = 0.00f;
    this->CanAttackDistance = 0.00f;
    this->LoopBlockID = 0;
    this->AttackInputLimitDistance = 0.00f;
    this->KaizinID = 0;
    this->KaizinScale = 0.00f;
    this->KaizinPosDepth = 0.00f;
    this->KaizinPosHeight = 0.00f;
    this->KaizinPosSide = 0.00f;
    this->KaizinAngle = 0.00f;
    this->Box->SetupAttachment(RootComponent);
    this->box2->SetupAttachment(RootComponent);
    this->box3->SetupAttachment(RootComponent);
}

void ARCNzMTB_WallActorBase::PlayWallTextVoice(ARCCharacterRender* InChara) {
}

void ARCNzMTB_WallActorBase::PlayTextVoice(ARCCharacterRender* InChara, FName VoiceID) {
}

bool ARCNzMTB_WallActorBase::LoadParamData(FName SceneID, int32 Index) {
    return false;
}

void ARCNzMTB_WallActorBase::InitializeWallActor_Implementation() {
}

EWallType ARCNzMTB_WallActorBase::GetWallType() {
    return EWallType::NORMAL;
}



