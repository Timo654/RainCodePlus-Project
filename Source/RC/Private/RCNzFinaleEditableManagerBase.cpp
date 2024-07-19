#include "RCNzFinaleEditableManagerBase.h"

ARCNzFinaleEditableManagerBase::ARCNzFinaleEditableManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SectionDataTable = NULL;
    this->PieceDataTable = NULL;
    this->PiecePositionDataTable = NULL;
}

void ARCNzFinaleEditableManagerBase::SpawnPieceActorList_Implementation() {
}

void ARCNzFinaleEditableManagerBase::GetSpawnPieceInfoList(TArray<FRCNzFinaleEditableSpawnPieceData>& dataList) {
}

void ARCNzFinaleEditableManagerBase::GetAllPieceNameList(TArray<FName>& nameList) {
}

void ARCNzFinaleEditableManagerBase::GetAllPieceInfoList(TArray<FRCNzFinaleEditableSpawnPieceData>& dataList) {
}


