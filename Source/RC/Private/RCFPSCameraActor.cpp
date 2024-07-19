#include "RCFPSCameraActor.h"

ARCFPSCameraActor::ARCFPSCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OffsetX = 0.00f;
    this->OffsetY = 0.00f;
    this->OffsetZ = 0.00f;
    this->RotationSpeed = 80.00f;
    this->Speed = 320.00f;
    this->bLimitCheck = true;
    this->bAngleCharacter = true;
    this->Height = 0.00f;
    this->Angle = 0.00f;
    this->VerticalAngle = 0.00f;
    this->Length = 400.00f;
    this->LengthSpeed = 10.00f;
    this->FOV = 80.00f;
    this->LimitAngleMin = -90.00f;
    this->LimitAngleMax = 90.00f;
    this->LimitVerticalAngleMin = -40.00f;
    this->LimitVerticalAngleMax = 20.00f;
    this->LimitLengthMin = 50.00f;
    this->LimitLengthMax = 600.00f;
    this->bSurveyType = false;
}


