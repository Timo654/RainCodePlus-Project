#include "RCUiFaderHUD.h"
#include "RCHUDLoadComponent.h"

ARCUiFaderHUD::ARCUiFaderHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->LoadComponent = CreateDefaultSubobject<URCHUDLoadComponent>(TEXT("LoadComponent"));
    this->ShortLoadIcon = NULL;
    this->SavingIcon = NULL;
    this->TipsScreenWidget_WithEditor = NULL;
    this->TipsScreenWidget = NULL;
    this->SaveLoadLayout = NULL;
    this->SaveLoadLayoutPriority = 0;
    this->isSaveLoadFinished = false;
    this->bAllWidgetsHidden = false;
    this->bAllWidgetsHiddenEnable = true;
    this->OptionLayout = NULL;
    this->OptionLayoutPriority = 0;
    this->OptionLayoutPath = TEXT("/Game/RC/UI/Menu/WBP_Menu_Option_Layout.WBP_Menu_Option_Layout_C");
    this->OptionOpener = NULL;
    this->SceneChangeMediator = NULL;
}

void ARCUiFaderHUD::StartSceneChangeLoadingTest() {
}

void ARCUiFaderHUD::StartSceneChange(ERCSceneChangeType Type) {
}

void ARCUiFaderHUD::SetSaveLoadFinished(bool isFinish) {
}

void ARCUiFaderHUD::SetAllWidgetsHiddenEnable(bool bInEnable) {
}

bool ARCUiFaderHUD::SetAllWidgetsHidden(bool bInHidden) {
    return false;
}

bool ARCUiFaderHUD::SaveLoadFinish() {
    return false;
}

void ARCUiFaderHUD::OptionStartWrap() {
}

void ARCUiFaderHUD::Option_Start() {
}

void ARCUiFaderHUD::Option_Release() {
}

bool ARCUiFaderHUD::Option_Load() {
    return false;
}

bool ARCUiFaderHUD::Option_IsFinished() {
    return false;
}

bool ARCUiFaderHUD::Option_CreateWidget() {
    return false;
}

void ARCUiFaderHUD::Option_Close() {
}

bool ARCUiFaderHUD::IsAllWidgetsHiddenEnable() {
    return false;
}

bool ARCUiFaderHUD::IsAllWidgetsHidden() {
    return false;
}

void ARCUiFaderHUD::FinishSceneChange() {
}

bool ARCUiFaderHUD::CheckSaveLoadFinished() {
    return false;
}


