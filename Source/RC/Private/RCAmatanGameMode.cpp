#include "RCAmatanGameMode.h"
#include "RCAmatanHUD.h"
#include "RCAmatanPawnScript.h"
#include "RCAmatanPlayerController.h"

ARCAmatanGameMode::ARCAmatanGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ARCAmatanPlayerController::StaticClass();
    this->HUDClass = ARCAmatanHUD::StaticClass();
    this->DefaultPawnClass = ARCAmatanPawnScript::StaticClass();
}


