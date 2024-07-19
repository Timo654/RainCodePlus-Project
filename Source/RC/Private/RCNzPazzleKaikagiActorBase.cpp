#include "RCNzPazzleKaikagiActorBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ARCNzPazzleKaikagiActorBase::ARCNzPazzleKaikagiActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Box = NULL;
    this->KaikagiNum = 0;
    this->Mesh->SetupAttachment(RootComponent);
}





void ARCNzPazzleKaikagiActorBase::Initialize_Implementation(const FString& NewKaikagiName, const FString& NewKaikagiCapText) {
}

void ARCNzPazzleKaikagiActorBase::HoldMove_Implementation(const FVector nextLocation) {
}

FString ARCNzPazzleKaikagiActorBase::GetNameText() {
    return TEXT("");
}

void ARCNzPazzleKaikagiActorBase::GetKaikagiTextData(FString& nameText, FString& capText) {
}

FString ARCNzPazzleKaikagiActorBase::GetCapText() {
    return TEXT("");
}


