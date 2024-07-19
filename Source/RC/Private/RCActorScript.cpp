#include "RCActorScript.h"
#include "RCScriptActorComponent.h"

ARCActorScript::ARCActorScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScriptActorComp = CreateDefaultSubobject<URCScriptActorComponent>(TEXT("ScriptActorComp"));
    this->bDebugScriptDraw = false;
    this->bKakiwari = false;
}

void ARCActorScript::StartRotationYaw(float Yaw, float SpeedScale, bool bDirect) {
}

void ARCActorScript::StartRotationFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void ARCActorScript::StartRotationFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect) {
}

void ARCActorScript::StartRotationFromCharacter(FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void ARCActorScript::StartMoveFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeedScale) {
}

void ARCActorScript::StartMoveFromPositionList(TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop) {
}

void ARCActorScript::StartMoveFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition) {
}

void ARCActorScript::StartMoveFromPlayer(float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw) {
}

void ARCActorScript::SetTransformTargetPointName(FName InPointName, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCActorScript::SetTransformPlayerStartName(FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw) {
}

void ARCActorScript::SetPositionYaw(FVector InPosition, float InYaw) {
}

void ARCActorScript::SetMoveSpeed(float InWalkSpeed, float InRunSpeed) {
}

void ARCActorScript::SetMovePause(bool bInMovePause) {
}

void ARCActorScript::RestoreRotationYaw(float SpeedScale, bool bDirect) {
}

void ARCActorScript::RestoreMovePosition(float SpeedScale) {
}

void ARCActorScript::RestoreMoveList() {
}

void ARCActorScript::ResetMove() {
}

bool ARCActorScript::IsMoveEnd() {
    return false;
}

void ARCActorScript::BackupMovePosition() {
}


