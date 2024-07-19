#include "RCNzPazzleBarrelBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ARCNzPazzleBarrelBase::ARCNzPazzleBarrelBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->upperAnswerWordRoot = CreateDefaultSubobject<USceneComponent>(TEXT("upperAnswerWordRoot"));
    this->lowerAnswerWordRoot = CreateDefaultSubobject<USceneComponent>(TEXT("lowerAnswerWordRoot"));
    this->kaikagi_1 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi1"));
    this->kaikagi_2 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi2"));
    this->kaikagi_3 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi3"));
    this->kaikagi_4 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi4"));
    this->kaikagi_5 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi5"));
    this->kaikagi_6 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi6"));
    this->cameraParent = CreateDefaultSubobject<USceneComponent>(TEXT("cameraParent"));
    this->rotateSpeed = 100.00f;
    this->rotateSpeedScale = 1.00f;
    this->minRotateSpeed = 10.00f;
    this->maxRotateSpeed = 359.00f;
    this->minCamPitchRot = -10.00f;
    this->maxCamPitchRot = 30.00f;
    this->InvertCamPitchRot = false;
    this->SpeedCamPitchRot = 1.00f;
    this->maxPointerY = 360.00f;
    this->minCamYawRot = -10.00f;
    this->maxCamYawRot = 10.00f;
    this->InvertCamYawRot = false;
    this->SpeedCamYawRot = 1.00f;
    this->maxPointerX = 640.00f;
    this->isRotate = false;
    this->kaikagiSpawnPointList.AddDefaulted(6);
    this->kaikagiBaseClass = NULL;
    this->ShinigamiEatAngle = 90.00f;
    this->MinTaikutuWait = 10.00f;
    this->MaxTaikutuWait = 20.00f;
    this->BarrelWordUpperAngle = 0.00f;
    this->BarrelWordLowerAngle = 0.00f;
    this->BarrelWordDepthOffset = 0.00f;
    this->BarrelWordTextScale = 1.00f;
    this->ShinigamiAngleWord8 = 155.00f;
    this->ShinigamiAngleWord12 = 155.00f;
    this->ShinigamiAngleWord16 = 155.00f;
    this->InitBarrelAngle = 0.00f;
    this->Mesh->SetupAttachment(RootComponent);
    this->upperAnswerWordRoot->SetupAttachment(Mesh);
    this->lowerAnswerWordRoot->SetupAttachment(Mesh);
    this->kaikagi_1->SetupAttachment(RootComponent);
    this->kaikagi_2->SetupAttachment(RootComponent);
    this->kaikagi_3->SetupAttachment(RootComponent);
    this->kaikagi_4->SetupAttachment(RootComponent);
    this->kaikagi_5->SetupAttachment(RootComponent);
    this->kaikagi_6->SetupAttachment(RootComponent);
    this->cameraParent->SetupAttachment(RootComponent);
}

bool ARCNzPazzleBarrelBase::SwitchIsRotate() {
    return false;
}


void ARCNzPazzleBarrelBase::SetRotateSpeedScale(float Scale) {
}

void ARCNzPazzleBarrelBase::SetRotateSpeed(float Speed) {
}

void ARCNzPazzleBarrelBase::SetRotateCameraParentForPointer(FVector2D pointerPos) {
}

void ARCNzPazzleBarrelBase::SetRotateCameraParent(FRotator NewRot) {
}


void ARCNzPazzleBarrelBase::PlayVoice(ARCCharacterRender* InChara, FName VoiceID) {
}

void ARCNzPazzleBarrelBase::InitializeKaikagiActor(const TArray<FString>& KaikagiNameList, const TArray<FString>& KaikagiTextList, const int32& Length) {
}


float ARCNzPazzleBarrelBase::GetRotateSpeedScale() {
    return 0.0f;
}

float ARCNzPazzleBarrelBase::GetRotateSpeed() {
    return 0.0f;
}


void ARCNzPazzleBarrelBase::ChangeRotate(bool isRot) {
}

void ARCNzPazzleBarrelBase::AddZoomCamera(float AddForward) {
}

void ARCNzPazzleBarrelBase::AddRotateCameraParent(FRotator addRot) {
}


