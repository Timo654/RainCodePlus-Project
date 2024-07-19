#include "RCBoatPawn.h"

ARCBoatPawn::ARCBoatPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoseThreshold = 0.00f;
    this->TailThreshold = 0.00f;
    this->BackSpeedCoeff = 0.50f;
    this->TurnSpeedCoeff = 0.50f;
    this->SimpleTurnSpeedCoeff = 0.25f;
    this->Acceleration = 66.70f;
    this->SpeedStep1 = 100.00f;
    this->SpeedStep2 = 300.00f;
    this->UseSimulation = true;
    this->Steering = true;
    this->PreserveCamera = false;
    this->PS_Shipwave = NULL;
    this->PS_EngineSplash0 = NULL;
    this->PS_EngineSplash1 = NULL;
    this->PS_Splash = NULL;
    this->NiagaraShipwave = NULL;
    this->NiagaraSplash = NULL;
    this->NiagaraEngineSplash0 = NULL;
    this->NiagaraEngineSplash1 = NULL;
}

void ARCBoatPawn::SetSteering(bool Enable) {
}





void ARCBoatPawn::OnCrashed(UPrimitiveComponent* Component, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector Normal, const FHitResult& HitResult) {
}


float ARCBoatPawn::GetSimulationTick(float Tick) {
    return 0.0f;
}

FVector ARCBoatPawn::GetNavigationVelocityNorm(float DeltaTime) {
    return FVector{};
}

FVector ARCBoatPawn::GetNavigationVelocity() {
    return FVector{};
}

FVector ARCBoatPawn::GetNavigationHead() {
    return FVector{};
}


