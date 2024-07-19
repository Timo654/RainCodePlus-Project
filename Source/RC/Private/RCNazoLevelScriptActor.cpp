#include "RCNazoLevelScriptActor.h"

ARCNazoLevelScriptActor::ARCNazoLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = ERCNazoLSAState::Invalid;
    this->SceneSettingsDataTable = NULL;
    this->SceneSettingsDataTableBG = NULL;
    this->TileSettingsDataTableBG = NULL;
    this->StartSceneIndex = -1;
    this->bSceneTest = false;
    this->bFirstScene = true;
    this->bStartByManualSaveData = false;
    this->bStartByAutoSaveData = false;
    this->CurrentSceneIndex = -1;
    this->bCurrentSceneVisibleCompleted = false;
    this->bCurrentSceneAssetLoadCompleted = false;
    this->PrevSceneIndex = -1;
    this->NextSceneIndex = -1;
    this->bNextSceneAutoLoadStart = false;
    this->NextSceneAutoLoadSceneIndex = 0;
    this->NextSceneAutoLoadDelay = 2.00f;
    this->NextSceneAutoLoadElapsedTime = 0.00f;
    this->NextSceneAutoLoadMomoryRate = 80;
    this->NextSceneAutoLoadWarningMomoryRate = 90;
    this->ChangeSceneReleaseCnt = 0;
    this->bChangeSceneRestart = false;
}

void ARCNazoLevelScriptActor::UnloadLevelCompleted() {
}

void ARCNazoLevelScriptActor::StartScene(FName SceneID) {
}

void ARCNazoLevelScriptActor::SetCurrentSceneLevelScriptActor(ALevelScriptActor* LevelScriptActor) {
}

void ARCNazoLevelScriptActor::ReleaseScene(FName SceneID) {
}

void ARCNazoLevelScriptActor::ReleaseCurrentScene() {
}

bool ARCNazoLevelScriptActor::LoadScene(FName SceneID) {
    return false;
}

void ARCNazoLevelScriptActor::LoadNextScene() {
}

void ARCNazoLevelScriptActor::LoadLevelCompleted() {
}

void ARCNazoLevelScriptActor::LoadAllNextScenes() {
}

bool ARCNazoLevelScriptActor::IsSceneInvisible(FName SceneID) {
    return false;
}

bool ARCNazoLevelScriptActor::IsReleaseSceneCompleted(FName SceneID) {
    return false;
}

bool ARCNazoLevelScriptActor::IsLoadSceneCompleted(FName SceneID) {
    return false;
}

bool ARCNazoLevelScriptActor::IsInitialized() {
    return false;
}

bool ARCNazoLevelScriptActor::IsCurrentSceneVisibleCompleted() {
    return false;
}

bool ARCNazoLevelScriptActor::IsCurrentSceneReady() {
    return false;
}

FName ARCNazoLevelScriptActor::GetNextSceneID() {
    return NAME_None;
}

ALevelScriptActor* ARCNazoLevelScriptActor::GetCurrentSceneLevelScriptActor() {
    return NULL;
}

FName ARCNazoLevelScriptActor::GetCurrentSceneID() {
    return NAME_None;
}

bool ARCNazoLevelScriptActor::ChangeTitle() {
    return false;
}

bool ARCNazoLevelScriptActor::ChangeScene(FName SceneID) {
    return false;
}

bool ARCNazoLevelScriptActor::ChangeNextScene() {
    return false;
}

bool ARCNazoLevelScriptActor::ChangeFirstScene() {
    return false;
}

bool ARCNazoLevelScriptActor::ChangeCheckPointScene(bool bRecoverPlayerHP) {
    return false;
}


