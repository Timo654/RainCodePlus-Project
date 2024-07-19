#include "RCRealPlayerController.h"

ARCRealPlayerController::ARCRealPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->SpeedRun = 480.00f;
    this->SpeedWalk = 320.00f;
    this->SpeedTrain = 224.00f;
    this->SpeedYoromeki = 192.00f;
    this->bTpsCameraEnable = false;
    this->CharacterBase = NULL;
    this->CharacterProxy = NULL;
    this->RealPlayerGameMode = ERCRealPlayerGameMode::FreeMove;
    this->ResearchVisionTimeMode = ERCResearchVisionTimeMode::Past;
    this->ReturnType = ERCRealPlayerControllerReturnType::Non;
    this->LastSelectIndex = 0;
    this->bEnableInputMove = false;
    this->bChangeCamera = false;
    this->bReserchExit = false;
    this->bReserchMinimap = true;
    this->bReserchVisionChange = true;
    this->bHudDraw = false;
    this->bStartMenuCollection = false;
    this->bIsEventTrigger = false;
    this->bMove = false;
    this->InputYaw = 0.00f;
    this->MoveYaw = 0.00f;
    this->LastMoveScale = 0.00f;
    this->RunSpeed = 480.00f;
    this->WalkSpeed = 320.00f;
    this->MaxSpeedScale = 1.00f;
    this->MoveSpeedType = ERCPlayerMoveSpeedType::Run;
    this->bWalk = false;
    this->bRun = false;
    this->bRunPadPressed = false;
    this->StopTimeSec = 0.00f;
    this->bMoveButtonSkip = false;
    this->PlayTimeSec = 0.00f;
    this->bSetSpeed = false;
    this->MoveInputTime = 0.10f;
    this->MoveInputElapsedTime = 0.00f;
    this->bTurn = false;
    this->bUseSplash = true;
    this->ToonDirectionalLight = NULL;
    this->bToonDirectionalLightInit = false;
    this->bToonDirectionalLightOverwrite = false;
    this->ToonDirectionalLightEventFollowCameraActor = NULL;
    this->bSwitchCameraToonDirectionalLight = false;
    this->RCRainMaker = NULL;
    this->MoveTickMax = 0.20f;
    this->MoveTick = 0.00f;
    this->MovePositionLength = 75.00f;
    this->bIsButtonADVResearchExit = false;
    this->bIsButtonADVHolding = false;
    this->bIsButtonADVTalk = false;
    this->AutoPlayStackCount = 0;
    this->bAutoPlayStackWarp = false;
    this->bDebugScriptDraw = false;
    this->AccessLength = 150.00f;
    this->Boat = NULL;
    this->BoatSuspended = false;
    this->bDebugPositionDraw = false;
    this->DebugPositionLength = 0.00f;
    this->DebugPositionHeight = 0.00f;
    this->DebugPositionAngle = 0.00f;
}

void ARCRealPlayerController::StartPlay(ERCRealPlayerGameMode InGameMode) {
}

void ARCRealPlayerController::SetStartMenuCollection(bool bInStartMenuCollection) {
}

void ARCRealPlayerController::SetSpotSelectQuestionTextID(FName InSpotSelectQuestionTextID) {
}

void ARCRealPlayerController::SetReserchVisionChangeFlag(bool bFlag) {
}

void ARCRealPlayerController::SetReserchMinimapFlag(bool bFlag) {
}

void ARCRealPlayerController::SetReserchExitFlag(bool bFlag) {
}

void ARCRealPlayerController::SetResearchVisionTimeMode(ERCResearchVisionTimeMode InTimeMode) {
}

void ARCRealPlayerController::SetRealPlayerGameMode(ERCRealPlayerGameMode InGameMode) {
}

void ARCRealPlayerController::SetRainDraw(bool flag) {
}

void ARCRealPlayerController::SetNextToonDirectionalLightPosition(const FVector InLocation, const FRotator InRotator, bool bForce) {
}

void ARCRealPlayerController::SetMoveSpeedType(ERCPlayerMoveSpeedType InSpeedType) {
}

void ARCRealPlayerController::SetLastPlayerStartName(FName InPlayerStartName) {
}

void ARCRealPlayerController::SetInputFlag(bool bFlag) {
}

void ARCRealPlayerController::SetDebugScriptDraw(bool bDraw) {
}

void ARCRealPlayerController::SetCharacterName(FName InCharacterName) {
}

void ARCRealPlayerController::SetBoatEnabled(bool Enable, ARCBoatPawn* BoatPawn) {
}

void ARCRealPlayerController::RestartPlay() {
}

void ARCRealPlayerController::Respawn() {
}

void ARCRealPlayerController::Reset() {
}

bool ARCRealPlayerController::IsReserchVisionChangeFlag() {
    return false;
}

bool ARCRealPlayerController::IsReserchMinimapFlag() {
    return false;
}

bool ARCRealPlayerController::IsReserchExitFlag() {
    return false;
}

bool ARCRealPlayerController::IsPlayerReady() {
    return false;
}

bool ARCRealPlayerController::IsPlayerActor(AActor* InActor) {
    return false;
}

bool ARCRealPlayerController::IsInputFlag() {
    return false;
}

ARCCharacterLigthActor* ARCRealPlayerController::GetToonDirectionalLightActor() const {
    return NULL;
}

ERCResearchVisionTimeMode ARCRealPlayerController::GetResearchVisionTimeMode() {
    return ERCResearchVisionTimeMode::Past;
}

ERCRealPlayerGameMode ARCRealPlayerController::GetRealPlayerGameMode() {
    return ERCRealPlayerGameMode::FreeMove;
}

ARCRainMaker* ARCRealPlayerController::GetRainMaker() {
    return NULL;
}

FName ARCRealPlayerController::GetLastPlayerStartName() {
    return NAME_None;
}

ARCCharacterRender* ARCRealPlayerController::GetCharacter() {
    return NULL;
}

bool ARCRealPlayerController::GetBoatSuspended() const {
    return false;
}

ARCBoatPawn* ARCRealPlayerController::GetBoat() {
    return NULL;
}


