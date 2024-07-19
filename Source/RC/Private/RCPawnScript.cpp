#include "RCPawnScript.h"
#include "RCScriptActorComponent.h"

ARCPawnScript::ARCPawnScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScriptActorComp = CreateDefaultSubobject<URCScriptActorComponent>(TEXT("ScriptActorComp"));
    this->HalfHeight = 0.00f;
    this->Radius = 0.00f;
    this->bIsLevelSetting = false;
    this->bDebugScriptDraw = false;
    this->bKakiwari = false;
    this->bTalk = false;
    this->BalloonFrameType = 0;
    this->BalloonType = 0;
    this->BallonPositionType = ERCCharacterBallonPositionType::Custom;
    this->bBallonPositionTypeCondition = true;
    this->BallonPositionData = NULL;
    this->TalkLength = 150.00f;
    this->SelifLength = 600.00f;
    this->BalloonLength = 600.00f;
    this->BalloonHeightOffset = 20.00f;
    this->BalloonAngleOffset = 0.00f;
    this->BalloonLengthOffset = 0.00f;
    this->bTalkEnable = false;
    this->bSelifDraw = false;
    this->bBalloonDraw = false;
    this->PlayerLength = -1.00f;
    this->CenterLength = -1.00f;
    this->QuestType = ERCActorQuestType::None;
}

void ARCPawnScript::StopMove() {
}

void ARCPawnScript::StartRotationYaw(float Yaw, float SpeedScale, bool bDirect) {
}

void ARCPawnScript::StartRotationFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void ARCPawnScript::StartRotationFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect) {
}

void ARCPawnScript::StartRotationFromCharacter(FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void ARCPawnScript::StartMoveFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeedScale, bool bPlayerCheck) {
}

void ARCPawnScript::StartMoveFromSplineName(FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void ARCPawnScript::StartMoveFromPositionList(TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void ARCPawnScript::StartMoveFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck) {
}

void ARCPawnScript::StartMoveFromPlayer(float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw) {
}

void ARCPawnScript::SetTransformTargetPointName(FName InPointName, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCPawnScript::SetTransformPlayerStartName(FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCPawnScript::SetPositionYaw(FVector InPosition, float InYaw) {
}

void ARCPawnScript::SetMoveSpeed(float InWalkSpeed, float InRunSpeed) {
}

void ARCPawnScript::SetMovePause(bool bInMovePause) {
}

void ARCPawnScript::RestoreRotationYaw(float SpeedScale, bool bDirect) {
}

void ARCPawnScript::RestoreMovePosition(float SpeedScale) {
}

void ARCPawnScript::RestoreMoveList() {
}

void ARCPawnScript::ResetMove() {
}

bool ARCPawnScript::IsMoveEnd() {
    return false;
}

FVector ARCPawnScript::GetActorLocationFoot() {
    return FVector{};
}

FVector ARCPawnScript::GetActorLocationBalloon() {
    return FVector{};
}

void ARCPawnScript::BackupMovePosition() {
}


