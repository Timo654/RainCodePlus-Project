#include "RCNzFinaleHeadingLineBase.h"
#include "Components/BoxComponent.h"

ARCNzFinaleHeadingLineBase::ARCNzFinaleHeadingLineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->FinaleManager = NULL;
    this->pieceActorClass = NULL;
}

void ARCNzFinaleHeadingLineBase::UpdatePieceQuestionState() {
}


void ARCNzFinaleHeadingLineBase::SpawnPieceActors_Implementation() {
}

void ARCNzFinaleHeadingLineBase::ShowSectionActor_Implementation() {
}

void ARCNzFinaleHeadingLineBase::ShowPieceActors_Implementation() {
}

void ARCNzFinaleHeadingLineBase::InitializeHeadingLine_Implementation(FName NewSectionID, FName SectionTextID, const TArray<FName>& NewPieceIDList, ARCNzFinaleManagerBase* NewFinaleManager) {
}

void ARCNzFinaleHeadingLineBase::HiddenSectionActor_Implementation() {
}

void ARCNzFinaleHeadingLineBase::HiddenPieceActors_Implementation() {
}

TArray<bool> ARCNzFinaleHeadingLineBase::GetDetectivePointState() {
    return TArray<bool>();
}

int32 ARCNzFinaleHeadingLineBase::GetDetectivepointNum() {
    return 0;
}

FString ARCNzFinaleHeadingLineBase::GetDetectiveBackgroundImagePath() {
    return TEXT("");
}


