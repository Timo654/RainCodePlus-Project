#include "RCAmatanPlayerController.h"

ARCAmatanPlayerController::ARCAmatanPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CharacterBase = NULL;
    this->InputYaw = 0.00f;
    this->MoveYaw = 0.00f;
    this->WalkSpeed = 320.00f;
    this->RotSpeed = 80.00f;
    this->MaxSpeedScale = 1.00f;
    this->CanDoArming = true;
    this->Panels = 0;
    this->steps = 0;
    this->Goal = false;
    this->RetryCount = 0;
    this->ScanLength = 180.00f;
    this->MovementLock = false;
    this->MovementLockOverride = false;
    this->MovementLockOverrideTemporary = false;
    this->ForceArmExtendable = false;
    this->NowInBlocked = false;
    this->NowFailure = false;
    this->Saveable = false;
    this->CuringTimeIssued = false;
    this->bDebugScriptDraw = false;
    this->bDebugPositionDraw = false;
    this->DebugPositionLength = 0.00f;
    this->DebugPositionHeight = 0.00f;
    this->DebugPositionAngle = 0.00f;
    this->NiagaraBlueprint = NULL;
}

void ARCAmatanPlayerController::Voice(FName ID) {
}

void ARCAmatanPlayerController::UnsetForceArming(bool UpdateUI) {
}

void ARCAmatanPlayerController::UnlockMovementOverrideTemorary() {
}

void ARCAmatanPlayerController::UnlockMovementOverride() {
}

void ARCAmatanPlayerController::UnlockMovement() {
}

void ARCAmatanPlayerController::StartPuzzle() {
}

void ARCAmatanPlayerController::StartPlay(ERCRealPlayerGameMode InGameMode) {
}

void ARCAmatanPlayerController::ShrinkArm() {
}

void ARCAmatanPlayerController::SetSkippable(bool Skippable) {
}

void ARCAmatanPlayerController::SetSaveable(bool Save) {
}

void ARCAmatanPlayerController::SetNiagaraBlueprint(ANiagaraActor* bp) {
}

void ARCAmatanPlayerController::SetForceArming(bool UpdateUI) {
}

void ARCAmatanPlayerController::SetEventScene(bool Event) {
}

void ARCAmatanPlayerController::SetAnswer(TArray<int32> NewAnswer) {
}

bool ARCAmatanPlayerController::Resume() {
    return false;
}

void ARCAmatanPlayerController::RestartFrom(float After, FName StartPoint) {
}

void ARCAmatanPlayerController::Restart(float After) {
}

void ARCAmatanPlayerController::ResearchStart(bool UsePointer) {
}

void ARCAmatanPlayerController::ResearchFinish() {
}

void ARCAmatanPlayerController::PermitMovementSound() {
}

void ARCAmatanPlayerController::OnFailed(int32 nowsteps, ERCAmatanPuzzleFailureCode code, int32 last) {
}

void ARCAmatanPlayerController::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& R) {
}

void ARCAmatanPlayerController::OnArmComponentOverlapped(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARCAmatanPlayerController::LockMovementOverrideTemporary() {
}

void ARCAmatanPlayerController::LockMovementOverride() {
}

void ARCAmatanPlayerController::LockMovementInfinity() {
}

void ARCAmatanPlayerController::LockMovement(float Timeout) {
}

bool ARCAmatanPlayerController::IsMovementLocked() const {
    return false;
}

bool ARCAmatanPlayerController::GetSkippable() {
    return false;
}

bool ARCAmatanPlayerController::GetSaveable() const {
    return false;
}

int32 ARCAmatanPlayerController::GetRetryCount() {
    return 0;
}

ARCAmatanPawnScript* ARCAmatanPlayerController::GetAmatanPawn() {
    return NULL;
}

bool ARCAmatanPlayerController::ForceGoal() {
    return false;
}

void ARCAmatanPlayerController::ForbidMovementSound() {
}

void ARCAmatanPlayerController::FinishPuzzle() {
}

void ARCAmatanPlayerController::Face(int32 Index) {
}

void ARCAmatanPlayerController::ExtendArm() {
}

bool ARCAmatanPlayerController::DidGoal() {
    return false;
}

void ARCAmatanPlayerController::DeactivateShockEffect() {
}

bool ARCAmatanPlayerController::CanExtendArm() const {
    return false;
}

void ARCAmatanPlayerController::ActivateShockEffect() {
}


