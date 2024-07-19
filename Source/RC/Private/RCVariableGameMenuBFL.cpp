#include "RCVariableGameMenuBFL.h"

URCVariableGameMenuBFL::URCVariableGameMenuBFL() {
}

bool URCVariableGameMenuBFL::SetTopMenuID(FName InMenuID) {
    return false;
}

void URCVariableGameMenuBFL::SetQuestFailure(FName InQuestID) {
}

void URCVariableGameMenuBFL::SetQuestComplete(FName InQuestID) {
}

bool URCVariableGameMenuBFL::SetQuestCheckActor(FName InQuestID, FName InActorName) {
    return false;
}

void URCVariableGameMenuBFL::SetAllSubQuestFailure() {
}

void URCVariableGameMenuBFL::ResetTopMenu(int32 InChapter, FName InScene) {
}

void URCVariableGameMenuBFL::ResetHP() {
}

void URCVariableGameMenuBFL::RemoveKaikagi(FName InKaiKagiID) {
}

bool URCVariableGameMenuBFL::IsTutorial(FName InTutorialID) {
    return false;
}

bool URCVariableGameMenuBFL::IsTanteiPointDraw() {
    return false;
}

bool URCVariableGameMenuBFL::IsQuestCheckActor(FName InQuestID, FName InActorName) {
    return false;
}

bool URCVariableGameMenuBFL::IsPlayerUnknown() {
    return false;
}

bool URCVariableGameMenuBFL::IsFastTravel() {
    return false;
}

bool URCVariableGameMenuBFL::IsDrawWorldMap() {
    return false;
}

bool URCVariableGameMenuBFL::IsAllQuestCheckActor(FName InQuestID) {
    return false;
}

ERCGameMenuType URCVariableGameMenuBFL::GetTopMenuType() {
    return ERCGameMenuType::Real;
}

ERCGameMenuQuestStatus URCVariableGameMenuBFL::GetQuestStatus(FName InQuestID) {
    return ERCGameMenuQuestStatus::None;
}

int32 URCVariableGameMenuBFL::GetQuestPhase(FName InQuestID) {
    return 0;
}

ERCGameMenuPlayerIconType URCVariableGameMenuBFL::GetPlayerIconType() {
    return ERCGameMenuPlayerIconType::CHR000;
}

FName URCVariableGameMenuBFL::GetNowMainQuestID() {
    return NAME_None;
}

ERCGameMenuMapM07IconType URCVariableGameMenuBFL::GetMapM07IconType() {
    return ERCGameMenuMapM07IconType::Normal;
}

ERCGameMenuMapM03IconType URCVariableGameMenuBFL::GetMapM03IconType() {
    return ERCGameMenuMapM03IconType::Normal;
}

void URCVariableGameMenuBFL::ClearKaikagiList() {
}

void URCVariableGameMenuBFL::CheckListTable() {
}

void URCVariableGameMenuBFL::AddTutorial(FName InTutorialID) {
}

void URCVariableGameMenuBFL::AddQuest(FName InQuestID, int32 InPhase) {
}

void URCVariableGameMenuBFL::AddKaikagi(FName InKaiKagiID, int32 InPhase) {
}

void URCVariableGameMenuBFL::AddGlossary(FName InGlossaryID, int32 InPhase) {
}

void URCVariableGameMenuBFL::AddCharacter(FName InCharacterID, int32 InPhase) {
}


