#include "RCNzPazzleAnswerSwordBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ARCNzPazzleAnswerSwordBase::ARCNzPazzleAnswerSwordBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->answerWordPos = 0;
    this->answerWordTexture = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


