#include "RCCharacterViewerCameraPawn.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"

ARCCharacterViewerCameraPawn::ARCCharacterViewerCameraPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AutoPossessPlayer = EAutoReceiveInput::Player0;
    this->OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
    this->AimTargetActor = NULL;
    this->OurCameraSpringArm->SetupAttachment(RootComponent);
}


