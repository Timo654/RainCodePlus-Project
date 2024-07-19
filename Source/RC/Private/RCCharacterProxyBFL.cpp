#include "RCCharacterProxyBFL.h"

URCCharacterProxyBFL::URCCharacterProxyBFL() {
}

void URCCharacterProxyBFL::WalkSpline(AActor* InActor, AActor* InSplineActor, const float InTimeRate) {
}

void URCCharacterProxyBFL::UndoRimLight(AActor* InActor, const float InRimLightDurationSec) {
}

void URCCharacterProxyBFL::SwitchOutCurrentEventMotion(AActor* InActor) {
}

void URCCharacterProxyBFL::StopWalkSpline(AActor* InActor) {
}

void URCCharacterProxyBFL::StopMoveByCharacterName(FName InName) {
}

void URCCharacterProxyBFL::StopMove(AActor* InActor) {
}

void URCCharacterProxyBFL::StopLookAt(AActor* InActor) {
}

void URCCharacterProxyBFL::StopHoldingHand(AActor* InActor, const AActor* InTaegetActor) {
}

void URCCharacterProxyBFL::StartRotationYawByCharacterName(FName InName, float Yaw, float SpeedScale, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationYaw(AActor* InActor, float Yaw, float SpeedScale, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromTargetPointNameByCharacterName(FName InName, FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromTargetPointName(AActor* InActor, FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromPositionByCharacterName(FName InName, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromPosition(AActor* InActor, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromPlayer(AActor* InActor, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromCharacterByCharacterName(FName InName, FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromCharacter(AActor* InActor, AActor* InTargetActor, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartRotationFromActor(AActor* InActor, AActor* InTargetActor, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect) {
}

void URCCharacterProxyBFL::StartMoveFromTargetPointNameByCharacterName(FName InName, FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, bool bPlayerCheck) {
}

void URCCharacterProxyBFL::StartMoveFromTargetPointName(AActor* InActor, FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeed, bool bPlayerCheck, float TurnSpeedScale) {
}

void URCCharacterProxyBFL::StartMoveFromSplineNameByCharacterName(FName InName, FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void URCCharacterProxyBFL::StartMoveFromSplineName(AActor* InActor, FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void URCCharacterProxyBFL::StartMoveFromPositionListByCharacterName(FName InName, TArray<FRCScriptActorMoveInfo>& InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void URCCharacterProxyBFL::StartMoveFromPositionList(AActor* InActor, TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck) {
}

void URCCharacterProxyBFL::StartMoveFromPositionByCharacterName(FName InName, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck) {
}

void URCCharacterProxyBFL::StartMoveFromPosition(AActor* InActor, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck, float TurnSpeedScale) {
}

void URCCharacterProxyBFL::StartMoveFromPlayerByCharacterName(FName InName, float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw) {
}

void URCCharacterProxyBFL::StartMoveFromPlayer(AActor* InActor, float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw, float TurnSpeedScale) {
}

void URCCharacterProxyBFL::StartMotionActor(AActor* InActor, FName InMotionName, const float InPlayRate, bool bLoop, float InSwitchDurationSec, bool bStartLoopMotion) {
}

void URCCharacterProxyBFL::StartMotion(FName InName, FName InMotionName, bool bLoop) {
}

bool URCCharacterProxyBFL::StartLoadModelListAutoName(FName& OutName, ESCCharacterModel CharacterModel, FName InPlayerStartName, FName InMotionName, bool bVisibleFlag, bool bScriptLoad) {
    return false;
}

bool URCCharacterProxyBFL::StartLoadModelList(FName InName, ESCCharacterModel CharacterModel, FName InPlayerStartName, FName InMotionName, bool bVisibleFlag, bool bScriptLoad) {
    return false;
}

bool URCCharacterProxyBFL::StartLoadAutoName(FName& OutName, FName InFilename, bool bVisibleFlag, bool bScriptLoad) {
    return false;
}

bool URCCharacterProxyBFL::StartLoad(FName InName, FName InFilename, bool bVisibleFlag, bool bScriptLoad) {
    return false;
}

bool URCCharacterProxyBFL::StartCharcterSettingLoad(FName InSettingFilename) {
    return false;
}

void URCCharacterProxyBFL::SetVisibilityContainKakiwari(AActor* InActor, bool bVisibleFlag, bool bIsCollision) {
}

void URCCharacterProxyBFL::SetVisibilityByCharacterName(FName InName, bool bVisibleFlag) {
}

void URCCharacterProxyBFL::SetVisibility(AActor* InActor, bool bVisibleFlag, bool bIsCollision) {
}

void URCCharacterProxyBFL::SetViewParam(AActor* InActor, const float InCanViewDistance, const float InCanViewAngle) {
}

void URCCharacterProxyBFL::SetupAllBgCharacterMaterial() {
}

void URCCharacterProxyBFL::SetTransformTargetPointNameByCharacterName(FName InName, FName InPointName, FVector InOffsetPos, float InOffsetYaw) {
}

void URCCharacterProxyBFL::SetTransformTargetPointName(AActor* InActor, FName InPointName, FVector InOffsetPos, float InOffsetYaw) {
}

void URCCharacterProxyBFL::SetTransformPlayerStartNameByCharacterName(FName InName, FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw) {
}

void URCCharacterProxyBFL::SetTransformPlayerStartName(AActor* InActor, FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw) {
}

void URCCharacterProxyBFL::SetTalkSettingByCharacterName(FName InName, float InTalkLength, float InSelifLength, float InBalloonLength, float InBalloonHeightOffset, float InBalloonAngleOffset, float InBalloonLengthOffset) {
}

void URCCharacterProxyBFL::SetTalkSetting(AActor* InActor, float InTalkLength, float InSelifLength, float InBalloonLength, float InBalloonHeightOffset, float InBalloonAngleOffset, float InBalloonLengthOffset) {
}

void URCCharacterProxyBFL::SetTalkInfoByCharacterName(FName InName, bool bInTalk, int32 InBalloonFrameType, int32 InBalloonType, FName InSelifTextId) {
}

void URCCharacterProxyBFL::SetTalkInfo(AActor* InActor, bool bInTalk, int32 InBalloonFrameType, int32 InBalloonType, FName InSelifTextId) {
}

void URCCharacterProxyBFL::SetSpecialSelectLookSetting(AActor* InActor, const float InEyeMoveSpeed, const float InEyeTranslateNearMax, const float InEyeTranslateFarMax, const float InEyeTranslateUpMax, const float InEyeTranslateDownMax) {
}

void URCCharacterProxyBFL::SetPositionYawByCharacterName(FName InName, FVector InPosition, float InYaw) {
}

void URCCharacterProxyBFL::SetPositionYaw(AActor* InActor, FVector InPosition, float InYaw) {
}

void URCCharacterProxyBFL::SetPauseByCharacterName(FName InName, bool bPauseFlag) {
}

void URCCharacterProxyBFL::SetPause(AActor* InActor, bool bPauseFlag) {
}

void URCCharacterProxyBFL::SetOutlineWidth(AActor* InActor, const float InWidth) {
}

void URCCharacterProxyBFL::SetOrientRotationtoMovementFlag(AActor* InActor, bool bFlag) {
}

void URCCharacterProxyBFL::SetNoDelayLookProcessFlag(AActor* InActor, bool bState) {
}

void URCCharacterProxyBFL::SetNewAnimBP(AActor* InActor, UClass* InNewAnimClass) {
}

void URCCharacterProxyBFL::SetMovNearPlayerHide(bool bInFlag) {
}

void URCCharacterProxyBFL::SetMovePause(AActor* InActor, bool bInMovePause) {
}

void URCCharacterProxyBFL::SetMoveMobDraw(bool bInDraw) {
}

void URCCharacterProxyBFL::SetLookAtPosition(AActor* InActor, const FVector InLookAtTargetPos) {
}

void URCCharacterProxyBFL::SetLookAtCharacterFace(AActor* InActor, const AActor* InLookAtTargetActor) {
}

void URCCharacterProxyBFL::SetLookAtActor(AActor* InActor, const AActor* InLookAtTargetActor, const FName InLookAtTargetBoneName) {
}

void URCCharacterProxyBFL::SetExtraIdle(AActor* InActor, bool bState) {
}

void URCCharacterProxyBFL::SetDefaultLookSetting(AActor* InActor) {
}

void URCCharacterProxyBFL::SetCharacterAttatchmentFormId(FName InName, FName InCharacterAttatchmentFormId) {
}

void URCCharacterProxyBFL::SetCenterActorType(ERCCharacterProxyCenterActorType InType) {
}

void URCCharacterProxyBFL::SetCanBlink(AActor* InActor, bool bState) {
}

void URCCharacterProxyBFL::SetCameraFadeEnable(AActor* InActor, bool bFlag) {
}

void URCCharacterProxyBFL::SetCameraAlphaLengh(int32 InLengthMin, int32 InLengthMax) {
}

void URCCharacterProxyBFL::SetAutoOutlineWidth(AActor* InActor, bool bAuto) {
}

void URCCharacterProxyBFL::SetAllVisibility(bool bVisibleFlag) {
}

void URCCharacterProxyBFL::SetAllPause(bool bPauseFlag) {
}

void URCCharacterProxyBFL::SetAllNoDelayLookProcessFlag(bool bState) {
}

void URCCharacterProxyBFL::RestoreRotationYawByCharacterName(FName InName, float SpeedScale, bool bDirect) {
}

void URCCharacterProxyBFL::RestoreRotationYaw(AActor* InActor, float SpeedScale, bool bDirect) {
}

void URCCharacterProxyBFL::RestoreMovePositionByCharacterName(FName InName, float SpeedScale) {
}

void URCCharacterProxyBFL::RestoreMovePosition(AActor* InActor, float SpeedScale) {
}

void URCCharacterProxyBFL::RestoreMoveListByCharacterName(FName InName) {
}

void URCCharacterProxyBFL::RestoreMoveList(AActor* InActor) {
}

void URCCharacterProxyBFL::ResetMoveByCharacterName(FName InName) {
}

void URCCharacterProxyBFL::ResetMove(AActor* InActor) {
}

void URCCharacterProxyBFL::ResetEventMotion(AActor* InActor) {
}

void URCCharacterProxyBFL::ResetCameraAlphaLength() {
}

void URCCharacterProxyBFL::ReservePlayMotion(const FName InName, const FName InMotionName, bool bStartLoopMotion) {
}

void URCCharacterProxyBFL::ReserveAppearance(const FName InName, FName InBodyColorPaletteId, FName InFaceColorPaletteId, FName InSoliderNumberId, FName InEyeId, FName InSkinId) {
}

void URCCharacterProxyBFL::Release(FName InName) {
}

void URCCharacterProxyBFL::PlayLipsyncMotion(AActor* InActor, const FName InMotionName, bool bLoop, const float InPlayRate) {
}

void URCCharacterProxyBFL::PlayLipsyncBasedOnLines(AActor* InActor, float InLineCharacters, const float InLineDisplaySec, const float InLineIntervalAjust) {
}

bool URCCharacterProxyBFL::IsMoveMobDraw() {
    return false;
}

bool URCCharacterProxyBFL::IsMoveEnd(AActor* InActor) {
    return false;
}

bool URCCharacterProxyBFL::IsMotionBlend(AActor* InActor) {
    return false;
}

bool URCCharacterProxyBFL::IsLoadComplete(FName InName) {
    return false;
}

bool URCCharacterProxyBFL::IsLoadActorComplete(const TArray<FName>& InCheckCharacterNameArray) {
    return false;
}

bool URCCharacterProxyBFL::IsFinishedMotion(AActor* InActor) {
    return false;
}

bool URCCharacterProxyBFL::IsExistOutCurrentMotion(AActor* InActor) {
    return false;
}

bool URCCharacterProxyBFL::IsAllMoveEnd() {
    return false;
}

bool URCCharacterProxyBFL::IsAllLoadComplete() {
    return false;
}

void URCCharacterProxyBFL::InitShinigamiPosition(float InLength, float InHeight, float InAngle) {
}

AActor* URCCharacterProxyBFL::GetShinigamiActor() {
    return NULL;
}

bool URCCharacterProxyBFL::GetFinishChangeRimLight(AActor* InActor) {
    return false;
}

bool URCCharacterProxyBFL::GetFacial2DMotionNameList(const FName InFacial2DId, TArray<FName>& OutMotionNameList) {
    return false;
}

FName URCCharacterProxyBFL::GetCharacterAttatchmentFormId(FName InName) {
    return NAME_None;
}

AActor* URCCharacterProxyBFL::GetActorContainKakiwari(FName InName) {
    return NULL;
}

AActor* URCCharacterProxyBFL::GetActor(FName InName) {
    return NULL;
}

void URCCharacterProxyBFL::ExecuteHoldingHand(AActor* InActor, const AActor* InTaegetActor) {
}

void URCCharacterProxyBFL::EventFinishedOutMotion(AActor* InActor, const float InBlendSec) {
}

void URCCharacterProxyBFL::DetachAttachment(AActor* InActor, const EAttachPlaceType InPlaceType, const FVector InPutPos) {
}

void URCCharacterProxyBFL::ChangeRimLight(AActor* InActor, const FLinearColor InOutlineColor, const float InOutlineCoverageValue, const float InOutlineSmoothValue, const float InRimLightDurationSec) {
}

void URCCharacterProxyBFL::ChangeFacial(AActor* InActor, const FName InFacialName, bool bAllowFlowLiquid) {
}

void URCCharacterProxyBFL::ChangeDecalParentSocket(AActor* InActor, const FName InSocketName) {
}

void URCCharacterProxyBFL::ChangeColorPatternOnEventForActor(AActor* InActor, const FName InEventFacialColorName, float InFadeTime) {
}

void URCCharacterProxyBFL::ChangeColorPatternOnEvent(const FName InCharacterName, const FName InEventFacialColorName, float InFadeTime) {
}

void URCCharacterProxyBFL::ChangeAttachmentAnimation(AActor* InActor, const EAttachPlaceType InPlaceType, const ERCAttachAnimType InAnimationType) {
}

void URCCharacterProxyBFL::Blink(AActor* InActor) {
}

void URCCharacterProxyBFL::BackupMovePositionByCharacterName(FName InName) {
}

void URCCharacterProxyBFL::BackupMovePosition(AActor* InActor) {
}

void URCCharacterProxyBFL::AttachActorToUlity05(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToUlity04(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToUlity03(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToUlity02(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToUlity01(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToSpine(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToRightHand(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToPelvis(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToOverhead(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToMouth(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToLeftHand(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToHead(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::AttachActorToEye(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset) {
}

void URCCharacterProxyBFL::ApplyEventHairSpecular(const FName InCharacterName, const float InEventHairSpecularX, const float InEventHairSpecularY, const float InEventHairSpecularZ) {
}

void URCCharacterProxyBFL::ApplyEventEmissive(const FName InCharacterName, const float InEventEmissiveValue) {
}

void URCCharacterProxyBFL::ApplyColorPalette(AActor* InActor, const FName InColorPaletteId, const FName InFaceColorPaletteId, const FName InSoliderNumberId, const FName InEyeId, const FName InSkinId) {
}

void URCCharacterProxyBFL::ApplyCharacterMaterial(const FName InMaterialId) {
}


