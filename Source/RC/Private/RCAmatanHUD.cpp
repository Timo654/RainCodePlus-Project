#include "RCAmatanHUD.h"

ARCAmatanHUD::ARCAmatanHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->Components.AddDefaulted(3);
    this->Tablet = NULL;
    this->VoiceWidget = NULL;
    this->FaceWidget = NULL;
    this->FaderWidget = NULL;
}

void ARCAmatanHUD::SetRobotComponentVisibility(bool Show) {
}

bool ARCAmatanHUD::SelectStartWithDataArray(TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID) {
    return false;
}

int32 ARCAmatanHUD::GetSelectedIndex() {
    return 0;
}

bool ARCAmatanHUD::CheckSelectFinished() {
    return false;
}

void ARCAmatanHUD::Ask(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID) {
}


