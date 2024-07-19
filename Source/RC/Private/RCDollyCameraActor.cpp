#include "RCDollyCameraActor.h"

ARCDollyCameraActor::ARCDollyCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Plane = ERCDollyCamPlane::Dolly_XY;
    this->StickY = false;
    this->Target = NULL;
    this->Tracking = NULL;
    this->OnlyOnOverlap = false;
    this->TrackingAlways = false;
    this->ResetTimeout = 1.50f;
    this->Accelerate = false;
    this->StopDetectionTime = 1.00f;
    this->WaybackDuration = 1.50f;
    this->ForceMultiplier = 4.00f;
    this->AccelerationLimit = 0.50f;
    this->Controllable = false;
    this->RotationInTolerance = false;
}

void ARCDollyCameraActor::StopTracking() {
}

void ARCDollyCameraActor::SetTargetPawn() {
}

void ARCDollyCameraActor::SetTarget(AActor* NewTarget) {
}

void ARCDollyCameraActor::SetOffset(FVector NewOffset) {
}

void ARCDollyCameraActor::ResetTracking(bool ResetRotation) {
}

bool ARCDollyCameraActor::IsTracking() const {
    return false;
}

void ARCDollyCameraActor::CameraComponentDeactivated(UActorComponent* Comp) {
}

void ARCDollyCameraActor::CameraComponentActivated(UActorComponent* Comp, bool flag) {
}


