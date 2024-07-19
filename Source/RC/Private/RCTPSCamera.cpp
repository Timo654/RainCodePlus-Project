#include "RCTPSCamera.h"

ARCTPSCamera::ARCTPSCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OffsetX = 0.00f;
    this->OffsetY = 0.00f;
    this->OffsetZ = 0.00f;
    this->bLimitCheck = true;
    this->bAngleCharacter = true;
    this->Height = 40.00f;
    this->Angle = 0.00f;
    this->VerticalAngle = -20.00f;
    this->Length = 400.00f;
    this->LengthSpeed = 10.00f;
    this->FOV = 80.00f;
    this->LimitVerticalAngleMin = -40.00f;
    this->LimitVerticalAngleMax = 20.00f;
    this->LimitLengthMin = 50.00f;
    this->LimitLengthMax = 600.00f;
    this->bUseFake = false;
    this->bLockMove = false;
    this->OFFsetRot = 15.00f;
    this->AutoSpeed = 1.00f;
    this->bLengthCameraAlphaEnable = false;
    this->LengthCameraAlphaMin = 60.00f;
    this->LengthCameraAlphaMax = 100.00f;
    this->bUseCameraLagSubstepping = true;
    this->CameraLagMaxTimeStep = 0.02f;
    this->CameraRotationLagSpeed = 10.00f;
    this->bUsePawnControlRotation = false;
    this->bInheritPitch = false;
    this->bInheritYaw = false;
    this->bInheritRoll = false;
    this->CameraLagMaxDistance = 600.00f;
    this->CameraLagSpeed = 10.00f;
    this->ProbeChannel = ECC_Camera;
    this->ProbeSize = 12.00f;
    this->bEnableCameraLag = false;
    this->bEnableCameraRotationLag = false;
    this->bDoCollisionTest = true;
}

void ARCTPSCamera::SetFakeLocation(FVector Location) {
}

void ARCTPSCamera::ResetCamera() {
}

void ARCTPSCamera::RemoveFakeLocation() {
}


