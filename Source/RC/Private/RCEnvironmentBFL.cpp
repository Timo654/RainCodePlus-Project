#include "RCEnvironmentBFL.h"

URCEnvironmentBFL::URCEnvironmentBFL() {
}

void URCEnvironmentBFL::SetDefautMaterialD() {
}

void URCEnvironmentBFL::SetDefautFogID() {
}

void URCEnvironmentBFL::SetDefaultPlayerMoveType() {
}

void URCEnvironmentBFL::SearchFogActor() {
}

void URCEnvironmentBFL::Reset() {
}

void URCEnvironmentBFL::LoadRecovery() {
}

ERCEnvironmentChangeRainType URCEnvironmentBFL::GetRainDraw() {
    return ERCEnvironmentChangeRainType::None;
}

ERCEnvironmentChangeSpeedType URCEnvironmentBFL::GetPlayerMoveSpeed() {
    return ERCEnvironmentChangeSpeedType::None;
}

FName URCEnvironmentBFL::GetMinimapID() {
    return NAME_None;
}

FName URCEnvironmentBFL::GetFogID() {
    return NAME_None;
}

ARCEnvironmentChangeTrigger* URCEnvironmentBFL::GetEnvironmentChangeTrigger(FName InName) {
    return NULL;
}

FName URCEnvironmentBFL::GetCamera() {
    return NAME_None;
}

FName URCEnvironmentBFL::GetAreaNameID() {
    return NAME_None;
}

void URCEnvironmentBFL::ChangeWind(FName InWindActorName, FName InWindEventName) {
}

void URCEnvironmentBFL::ChangeShinigamiMaterialID(ARCCharacterRender* InCharacterActor, FName InPlayerMaterialID, bool bDirect) {
}

void URCEnvironmentBFL::ChangeRainDraw(ERCEnvironmentChangeRainType InRainType) {
}

void URCEnvironmentBFL::ChangePlayerMoveSpeed(ERCEnvironmentChangeSpeedType InSpeedType) {
}

void URCEnvironmentBFL::ChangeMinimapID(FName InMinimapID) {
}

void URCEnvironmentBFL::ChangeFogID(FName InFogID, bool bDirect) {
}

void URCEnvironmentBFL::ChangeFaceFilterID(FName InFaceFilterID) {
}

void URCEnvironmentBFL::ChangeCharacterRainMaterialID(ARCCharacterRender* InCharacterActor, ERCEnvironmentChangeRainType InRainType, bool bDirect) {
}

void URCEnvironmentBFL::ChangeCharacterMaterialID(ARCCharacterRender* InCharacterActor, FName InPlayerMaterialID, bool bDirect) {
}

void URCEnvironmentBFL::ChangeCharacterDrawLayerList(TArray<FName> IncharacterDrawLayerList) {
}

void URCEnvironmentBFL::ChangeCamera(FName InCameraID, bool bDirect) {
}

void URCEnvironmentBFL::ChangeAreaNameID(FName InAreaNameID) {
}


