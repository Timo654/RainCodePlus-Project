#include "RCAdvHUDAdvComponent.h"

URCAdvHUDAdvComponent::URCAdvHUDAdvComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowEditInstance = false;
    this->bMarkerEnable = false;
    this->MarkerScale = 1.00f;
    this->MarkerSubquestScale = 1.00f;
    this->MarkerMaxNum = 15;
    this->UsingMarkerNum = 0;
    this->SubquestNumMax = 5;
    this->UsingSubquestNum = 0;
    this->SubquestInformationWidgetPriority = 20020;
    this->FigureInformationWidget = NULL;
    this->FigureInformationWidgetPriority = 20030;
    this->DetPointWidgetPriority = 20010;
    this->DetPointWidgetPriority_NzResult = 30080;
    this->DetPointWidget = NULL;
    this->CutInRequest = ERCAdvHUDWidgetRequest::None;
    this->CutInWidgetPriority = 5000;
    this->CurrentCutInType = ERCAdvHUDCutInType::Normal;
    this->CurrentCutInSEType = ERCAdvHUDCutInSEType::None;
    this->CutInAnimSpeedRate = 1.00f;
    this->bCutInDelayFinish = false;
    this->CutInDelayFinishDelayTime = 0.00f;
    this->bCutInAnimReleaseWBPAtFinished = true;
    this->CutInWidget = NULL;
    this->CutInFullScreenWidget = NULL;
    this->CutInTextWidget = NULL;
    this->CutInAnimWidget = NULL;
}

bool URCAdvHUDAdvComponent::SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal) {
    return false;
}

bool URCAdvHUDAdvComponent::IsMarkerVisible(ARCCheckActor* InCheckActor) {
    return false;
}

int32 URCAdvHUDAdvComponent::GetMarkerDataNum() {
    return 0;
}

bool URCAdvHUDAdvComponent::GetMarkerData(int32 InIndex, FRCAdvHUDMarkerData& OutMarkerData) {
    return false;
}

bool URCAdvHUDAdvComponent::DetPointStart(int32 InPoint, bool InIsOpenedNzResult) {
    return false;
}

bool URCAdvHUDAdvComponent::DetPointFinish() {
    return false;
}

bool URCAdvHUDAdvComponent::CutInStart(FName InCutInID) {
    return false;
}

bool URCAdvHUDAdvComponent::CutInFinish() {
    return false;
}

bool URCAdvHUDAdvComponent::CutInAnimStartLoad(FName InCutInID) {
    return false;
}

bool URCAdvHUDAdvComponent::CutInAnimStart(FName InCutInID, bool bInReleaseWBPAtFinished) {
    return false;
}

bool URCAdvHUDAdvComponent::CutInAnimRelease(FName InCutInID) {
    return false;
}

bool URCAdvHUDAdvComponent::CutInAnimNext() {
    return false;
}

bool URCAdvHUDAdvComponent::CutInAnimAllRelease() {
    return false;
}

bool URCAdvHUDAdvComponent::CheckDetPointCheckStarted() {
    return false;
}

bool URCAdvHUDAdvComponent::CheckDetPointCheckFinished() {
    return false;
}

bool URCAdvHUDAdvComponent::CheckCutInStarted() {
    return false;
}

bool URCAdvHUDAdvComponent::CheckCutInFinished() {
    return false;
}

bool URCAdvHUDAdvComponent::CheckCutInAnimNextEnable() {
    return false;
}

bool URCAdvHUDAdvComponent::CheckCutInAnimLoadCompleted(FName InCutInID) {
    return false;
}

bool URCAdvHUDAdvComponent::CheckCutInAnimFinishedAnim() {
    return false;
}


