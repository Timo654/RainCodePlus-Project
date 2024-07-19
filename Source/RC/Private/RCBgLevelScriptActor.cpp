#include "RCBgLevelScriptActor.h"

ARCBgLevelScriptActor::ARCBgLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubLevelLoad = NULL;
    this->AddSubLevelLoad = NULL;
    this->EventSubLevelList = NULL;
    this->EventCommonSubLevelList = NULL;
    this->EventSubQuestSubLevelList = NULL;
    this->EventCommonAddSubLevelList = NULL;
    this->BgArea = -1;
    this->BgMapNum = -1;
    this->BgType = -1;
    this->bBgLoadReady = false;
    this->bVisible = true;
    this->bVisibleActor = false;
    this->bChangeSubLevel = false;
    this->bDisableChangeSubLevel = false;
}

bool ARCBgLevelScriptActor::StartUnLoadSubLevelList(bool bLoadingDraw, bool bPlayerMove) {
    return false;
}

bool ARCBgLevelScriptActor::StartLoadSubLevelList(const TArray<FName>& InSubLevelNameList, bool bLoadingDraw, bool bPlayerMove) {
    return false;
}

void ARCBgLevelScriptActor::StartLoadCommonSubLevel() {
}

bool ARCBgLevelScriptActor::StartLoadBgListMapID(FName InMapID, bool bLoadingDraw, bool bPlayerMove) {
    return false;
}

bool ARCBgLevelScriptActor::StartLoadBgList(int32 Area, int32 MapNum, int32 Type, bool bLoadingDraw, bool bPlayerMove) {
    return false;
}

bool ARCBgLevelScriptActor::StartAddLoadSubLevelList(const TArray<FName>& InSubLevelNameList, bool bLoadingDraw) {
    return false;
}

void ARCBgLevelScriptActor::SetVisibility(bool bFlag, bool bIsActor) {
}

void ARCBgLevelScriptActor::ReleaseEventSubLevelList() {
}

bool ARCBgLevelScriptActor::ReadyLoadBgListMapID(FName InMapID) {
    return false;
}

bool ARCBgLevelScriptActor::LoadEventSubLevelList(int32 InChapterNum, FName InSceneNum, FName InMapID, bool bCommonOnly) {
    return false;
}

bool ARCBgLevelScriptActor::LoadAllLevel(int32 InChapterNum, FName InSceneNum, FName InMapID, bool bCommonOnly) {
    return false;
}

bool ARCBgLevelScriptActor::IsVisibledSubLevel() {
    return false;
}

bool ARCBgLevelScriptActor::IsSyncSubLevel() {
    return false;
}

bool ARCBgLevelScriptActor::IsEnableSubLevel() {
    return false;
}

bool ARCBgLevelScriptActor::GetSubLevelList(TArray<FName>& OutSubLevelList, FName InMapID, bool bCommonOnly) {
    return false;
}

bool ARCBgLevelScriptActor::GetEventSettingList(TArray<FName>& OutEventSettingList, TArray<FName>& OutMapIDList, int32 InChapterNum, bool bCommonOnly) {
    return false;
}

bool ARCBgLevelScriptActor::GetCharacterSettingList(TArray<FName>& OutCharacterSettingList, FName InMapID, int32 InChapterNum, bool bCommonOnly) {
    return false;
}

int32 ARCBgLevelScriptActor::GetBgType() {
    return 0;
}

int32 ARCBgLevelScriptActor::GetBgMapNum() {
    return 0;
}

FName ARCBgLevelScriptActor::GetBgMapIDLong() {
    return NAME_None;
}

FName ARCBgLevelScriptActor::GetBgMapID() {
    return NAME_None;
}

int32 ARCBgLevelScriptActor::GetBgArea() {
    return 0;
}

void ARCBgLevelScriptActor::DisableChangeSubLevel() {
}


