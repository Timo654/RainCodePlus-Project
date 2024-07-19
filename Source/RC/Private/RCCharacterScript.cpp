#include "RCCharacterScript.h"
#include "RCCharacterMovementComponent.h"
#include "RCScriptActorComponent.h"

ARCCharacterScript::ARCCharacterScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URCCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->ScriptActorComp = CreateDefaultSubobject<URCScriptActorComponent>(TEXT("ScriptActorComp"));
    this->HalfHeight = 0.00f;
    this->Radius = 0.00f;
    this->bIsStartPlayer = false;
    this->bIsStartPlayerEnable = false;
    this->bIsLevelSetting = false;
    this->OldDeltaTime = 0.00f;
    this->MoveLength = 0.00f;
    this->DirectionAmount = 0.00f;
    this->bStartDirectionComplement = false;
    this->DirectionComplementSpeed = 0.00f;
    this->MaxDirectionAmount = 0.00f;
    this->bStartAntiDirectionComplement = false;
    this->DirectionRate = 0.10f;
    this->DirectionComplementSpeedRate = 0.00f;
    this->bTurnable = false;
    this->bFootIK = false;
    this->bDebugScriptDraw = false;
    this->bKakiwari = false;
    this->bTalk = false;
    this->bPlayerLookAtFace = true;
    this->BalloonFrameType = 0;
    this->BalloonType = 0;
    this->TalkLength = 150.00f;
    this->SelifLength = 600.00f;
    this->BalloonLength = 600.00f;
    this->BalloonHeightOffset = 20.00f;
    this->BalloonAngleOffset = 0.00f;
    this->BalloonLengthOffset = 0.00f;
    this->bIsLoading = false;
    this->bTalkEnable = false;
    this->bSelifDraw = false;
    this->bBalloonDraw = false;
    this->PlayerLength = -1.00f;
    this->CenterLength = -1.00f;
    this->QuestType = ERCActorQuestType::None;
    this->bNowPlayerLookAtFace = false;
    this->bWalkSpline = false;
}

void ARCCharacterScript::StopRotation() {
}

void ARCCharacterScript::StopMove() {
}

void ARCCharacterScript::StartTurnYaw(float InYaw, float InSpeedScale) {
}

void ARCCharacterScript::StartTurnWorldDirection(const FVector& InTurnDirection, float InSpeedScale) {
}

void ARCCharacterScript::StartTurnFromTargetPointName(FName InPointName, float InSpeedScale, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCCharacterScript::StartTurnFromPosition(FVector InPosition, float InSpeedScale, float InOffsetYaw) {
}

void ARCCharacterScript::StartTurnFromCharacter(FName InTargetCharacterName, float InSpeedScale, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCCharacterScript::StartTurn(const float InAngle, float InSpeedScale) {
}

void ARCCharacterScript::StartRotationYaw(float Yaw, float SpeedScale, bool bDirect) {
}

void ARCCharacterScript::StartRotationFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void ARCCharacterScript::StartRotationFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect) {
}

void ARCCharacterScript::StartRotationFromCharacter(FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void ARCCharacterScript::StartMoveFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeedScale, bool bPlayerCheck, float TurnSpeedScale) {
}

void ARCCharacterScript::StartMoveFromSplineName(FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void ARCCharacterScript::StartMoveFromPositionList(TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void ARCCharacterScript::StartMoveFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck, float TurnSpeedScale) {
}

void ARCCharacterScript::StartMoveFromPlayer(float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw, float TurnSpeedScale) {
}

void ARCCharacterScript::SetTransformTargetPointName(FName InPointName, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCCharacterScript::SetTransformPlayerStartName(FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCCharacterScript::SetPositionYaw(FVector InPosition, float InYaw) {
}

void ARCCharacterScript::SetOrientRotationtoMovementFlag(bool bFlag) {
}

void ARCCharacterScript::SetMoveSpeed(float InWalkSpeed, float InRunSpeed) {
}

void ARCCharacterScript::SetMovePause(bool bInMovePause) {
}

void ARCCharacterScript::RestoreRotationYaw(float SpeedScale, bool bDirect) {
}

void ARCCharacterScript::RestoreMovePosition(float SpeedScale) {
}

void ARCCharacterScript::RestoreMoveList() {
}

void ARCCharacterScript::ResetMove() {
}

bool ARCCharacterScript::IsMoveEnd() {
    return false;
}

URCCharacterMovementComponent* ARCCharacterScript::GetRCCharacterMovementComponent() const {
    return NULL;
}

float ARCCharacterScript::GetMoveSpeed() {
    return 0.0f;
}

float ARCCharacterScript::GetMaxVelocityLengthInFrames() {
    return 0.0f;
}

FRCScriptActorFootIKData ARCCharacterScript::GetFootIKData() {
    return FRCScriptActorFootIKData{};
}

float ARCCharacterScript::GetDirectionAmount() {
    return 0.0f;
}

FVector ARCCharacterScript::GetActorLocationFoot() {
    return FVector{};
}

FVector ARCCharacterScript::GetActorLocationBalloon() {
    return FVector{};
}

void ARCCharacterScript::EndTurn() {
}

void ARCCharacterScript::BackupMovePosition() {
}


