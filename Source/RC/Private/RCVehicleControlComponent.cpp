#include "RCVehicleControlComponent.h"

URCVehicleControlComponent::URCVehicleControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->vehicleType = ERCVehicleType::Bus;
    this->bodyHalfLength = 500.00f;
    this->pVehicleActor = NULL;
    this->bodyMesh = NULL;
    this->pStartTarget = NULL;
    this->pEndTarget = NULL;
    this->CurrentTargetIndex = 0;
    this->arrivalTargetLength = 0.00f;
    this->Speed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->Acceleration = 0.00f;
    this->accelerationBase = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->tireSpeed = 0.00f;
    this->CurrentState = 0;
    this->curveLerpCount = 0.00f;
    this->isCurve = false;
    this->curveLerp = 0.00f;
    this->bodyRotateEaseAlpha = 0.00f;
    this->speedEaseAlpha = 0.00f;
    this->isNearVehicle = false;
    this->nextStateForCrossWalk = 0;
    this->isThroughCrossWalk = false;
    this->curveInterpSpeed = 0.90f;
    this->isCurveRotManual = false;
    this->curveRotBaseValue = 5.00f;
    this->rollEndValue = 0.00f;
    this->alphaResetCount = 0.00f;
    this->speedCorrectionValue = 30.00f;
    this->DeltaTimeBuf = 0.00f;
}

void URCVehicleControlComponent::SpeedControl(float DeltaTime) {
}

void URCVehicleControlComponent::Slow() {
}

void URCVehicleControlComponent::SetTiresMeshArray(TArray<UStaticMeshComponent*> bpTiresMeshArray) {
}

void URCVehicleControlComponent::SetStartTargetPos() {
}

void URCVehicleControlComponent::SetControlActor(AActor* pControlActor) {
}

void URCVehicleControlComponent::SetBodyMesh(UStaticMeshComponent* pBodyMesh) {
}

void URCVehicleControlComponent::RollTiresForPitch() {
}

void URCVehicleControlComponent::Move(float DeltaTime) {
}

void URCVehicleControlComponent::Initialize(AActor* controlActor, ARCVehicleTarget* startTarget, ARCVehicleTarget* endTarget, TArray<ARCVehicleTarget*> rootTargetArray) {
}

AActor* URCVehicleControlComponent::GetNextTarget() {
    return NULL;
}

AActor* URCVehicleControlComponent::GetCurrentTarget() {
    return NULL;
}

TEnumAsByte<EVehicleState> URCVehicleControlComponent::GetCurrentState() {
    return Inactive;
}

void URCVehicleControlComponent::CheckNearTarget() {
}

void URCVehicleControlComponent::ChangeState(int32 _state) {
}

void URCVehicleControlComponent::Brake() {
}

void URCVehicleControlComponent::Accelerator() {
}


