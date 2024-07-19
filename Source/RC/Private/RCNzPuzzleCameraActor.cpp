#include "RCNzPuzzleCameraActor.h"
#include "Components/SceneComponent.h"

ARCNzPuzzleCameraActor::ARCNzPuzzleCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->kaikagi_1 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi1"));
    this->kaikagi_2 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi2"));
    this->kaikagi_3 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi3"));
    this->kaikagi_4 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi4"));
    this->kaikagi_5 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi5"));
    this->kaikagi_6 = CreateDefaultSubobject<USceneComponent>(TEXT("kaikagi6"));
    this->kaikagiSpawnPointList.AddDefaulted(6);
    this->kaikagiBaseClass = NULL;
    this->KaikagiDepthPos = 350.00f;
    this->kaikagi_1->SetupAttachment(RootComponent);
    this->kaikagi_2->SetupAttachment(RootComponent);
    this->kaikagi_3->SetupAttachment(RootComponent);
    this->kaikagi_4->SetupAttachment(RootComponent);
    this->kaikagi_5->SetupAttachment(RootComponent);
    this->kaikagi_6->SetupAttachment(RootComponent);
}



void ARCNzPuzzleCameraActor::InitializeKaikagiActor(const TArray<FString>& KaikagiNameList, const TArray<FString>& KaikagiTextList, const int32& Length, const int32 WordSize) {
}




