#include "RCAdvHUDMapComponent.h"

URCAdvHUDMapComponent::URCAdvHUDMapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowEditInstance = false;
    this->bMiniMapEnable = true;
    this->bMiniMapHiddenByOption = false;
    this->MiniMap = NULL;
    this->bLocationEnable = true;
    this->Location = NULL;
    this->bChangeAreaEnable = false;
    this->ChangeAreaScale = 1.00f;
    this->ChangeAreaMaxNum = 2;
    this->UsingChangeAreaNum = 0;
    this->bEnterBuildingEnable = false;
    this->EnterBuildingScale = 1.00f;
    this->EnterBuildingMaxNum = 2;
    this->UsingEnterBuildingNum = 0;
    this->bBusStopEnable = false;
    this->BusStopScale = 1.00f;
    this->BusStopMaxNum = 1;
    this->UsingBusStopNum = 0;
}

void URCAdvHUDMapComponent::StartLocation(bool bInMiniMap, bool bInLocation) {
}

bool URCAdvHUDMapComponent::SetMiniMapLocation(FName InLocationID, FName InLocationTextID) {
    return false;
}

void URCAdvHUDMapComponent::SetMiniMapEnable(bool bInEnable) {
}

bool URCAdvHUDMapComponent::SetLocationName(FName InLocationID, FName InLocationTextID) {
    return false;
}

void URCAdvHUDMapComponent::SetLocationEnable(bool bInEnable) {
}

bool URCAdvHUDMapComponent::SetLocationDisplayLocation(FName InLocationID, FName InLocationTextID) {
    return false;
}

void URCAdvHUDMapComponent::SetEnterBuildingEnable(bool bInEnable) {
}

bool URCAdvHUDMapComponent::SetEnterBuildingData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, float InScale) {
    return false;
}

void URCAdvHUDMapComponent::SetChangeAreaEnable(bool bInEnable) {
}

bool URCAdvHUDMapComponent::SetChangeAreaData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInDrawText, float InScale) {
    return false;
}

void URCAdvHUDMapComponent::SetBusStopEnable(bool bInEnable) {
}

bool URCAdvHUDMapComponent::SetBusStopData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInLooksLikeUsable, bool bInAccessable, float InScale) {
    return false;
}

bool URCAdvHUDMapComponent::LoadLocationDataName(FName InLocationID, FName InLocationTextID) {
    return false;
}

bool URCAdvHUDMapComponent::IsEnterBuildingVisible(ARCCheckActor* InCheckActor) {
    return false;
}

bool URCAdvHUDMapComponent::IsChangeAreaVisible(ARCCheckActor* InCheckActor) {
    return false;
}

bool URCAdvHUDMapComponent::IsBusStopVisible(ARCCheckActor* InCheckActor) {
    return false;
}

int32 URCAdvHUDMapComponent::GetEnterBuildingDataNum() {
    return 0;
}

void URCAdvHUDMapComponent::GetEnterBuildingData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDEnterBuildingData& OutEnterBuildingData) {
}

FName URCAdvHUDMapComponent::GetCurrentMiniMapTextID() {
    return NAME_None;
}

FName URCAdvHUDMapComponent::GetCurrentMiniMapLocationID() {
    return NAME_None;
}

FName URCAdvHUDMapComponent::GetCurrentLocationTextID() {
    return NAME_None;
}

FName URCAdvHUDMapComponent::GetCurrentLocationID() {
    return NAME_None;
}

FName URCAdvHUDMapComponent::GetCurrentLocationDisplayTextID() {
    return NAME_None;
}

FName URCAdvHUDMapComponent::GetCurrentLocationDisplayLocationID() {
    return NAME_None;
}

int32 URCAdvHUDMapComponent::GetChangeAreaDataNum() {
    return 0;
}

void URCAdvHUDMapComponent::GetChangeAreaData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDChangeAreaData& OutChangeAreaData) {
}

int32 URCAdvHUDMapComponent::GetBusStopDataNum() {
    return 0;
}

void URCAdvHUDMapComponent::GetBusStopData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDEnterBuildingData& OutBusStopData) {
}

void URCAdvHUDMapComponent::FinishLocation() {
}

bool URCAdvHUDMapComponent::CheckMiniMapRunning() {
    return false;
}

bool URCAdvHUDMapComponent::CheckMiniMapEnableScene() {
    return false;
}

bool URCAdvHUDMapComponent::CheckMiniMapEnable() {
    return false;
}

bool URCAdvHUDMapComponent::CheckLocationStarted(bool bInMiniMap, bool bInLocation) {
    return false;
}

bool URCAdvHUDMapComponent::CheckLocationRunning() {
    return false;
}

bool URCAdvHUDMapComponent::CheckLocationFinished() {
    return false;
}

bool URCAdvHUDMapComponent::CheckLocationEnable() {
    return false;
}

bool URCAdvHUDMapComponent::CheckEnterBuildingEnable() {
    return false;
}

bool URCAdvHUDMapComponent::CheckChangeAreaEnable() {
    return false;
}

bool URCAdvHUDMapComponent::CheckBusStopEnable() {
    return false;
}


