#include "RCWanderingSpiritActor.h"

ARCWanderingSpiritActor::ARCWanderingSpiritActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimInstance = NULL;
    this->PassEffectComp = NULL;
    this->PassEffect = NULL;
    this->bMove = true;
    this->bGoReturnMove = false;
    this->MotionType = ERCWanderingSpiritMotionType::Idle;
    this->SpeedType = ERCWanderingSpiritSpeedType::Low;
    this->MovingDirectionType = ERCWanderingSpiritMovingDirectionType::Up;
    this->MovingInterpType = ERCWanderingSpiritMovingInterpType::Default;
    this->HeightMax = 500.00f;
    this->HeightMin = -100.00f;
    this->InitHeightDistanceRate = 0.50f;
    this->Speed = 0.00f;
    this->HeightDistance = 0.00f;
    this->InitHeight = 0.00f;
    this->LimitHeight = 0.00f;
    this->DestinationHeight = 0.00f;
    this->CurrentZPos = 0.00f;
    this->PreZPos = 0.00f;
    this->PostZPos = 0.00f;
    this->LineTraceLength = 200.00f;
    this->bEffectSpawnable = true;
    this->EffectSpawnMarginTime = 0.50f;
    this->MoveLength = 0.00f;
}

void ARCWanderingSpiritActor::OnActorHitPlayer(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ARCWanderingSpiritActor::OnActorBeginOverlapPlayer(AActor* SelfActor, AActor* OtherActor) {
}


