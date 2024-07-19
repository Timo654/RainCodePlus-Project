#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAttachPlaceType.h"
#include "ERCAttachAnimType.h"
#include "ERCCharacterProxyCenterActorType.h"
#include "ESCCharacterModel.h"
#include "RCScriptActorMoveInfo.h"
#include "RCCharacterProxyBFL.generated.h"

class AActor;

UCLASS(Blueprintable)
class RC_API URCCharacterProxyBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCharacterProxyBFL();

    UFUNCTION(BlueprintCallable)
    static void WalkSpline(AActor* InActor, AActor* InSplineActor, const float InTimeRate);
    
    UFUNCTION(BlueprintCallable)
    static void UndoRimLight(AActor* InActor, const float InRimLightDurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchOutCurrentEventMotion(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void StopWalkSpline(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void StopMoveByCharacterName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void StopMove(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void StopLookAt(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void StopHoldingHand(AActor* InActor, const AActor* InTaegetActor);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationYawByCharacterName(FName InName, float Yaw, float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationYaw(AActor* InActor, float Yaw, float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromTargetPointNameByCharacterName(FName InName, FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromTargetPointName(AActor* InActor, FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromPositionByCharacterName(FName InName, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromPosition(AActor* InActor, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromPlayer(AActor* InActor, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromCharacterByCharacterName(FName InName, FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromCharacter(AActor* InActor, AActor* InTargetActor, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartRotationFromActor(AActor* InActor, AActor* InTargetActor, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromTargetPointNameByCharacterName(FName InName, FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromTargetPointName(AActor* InActor, FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeed, bool bPlayerCheck, float TurnSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromSplineNameByCharacterName(FName InName, FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromSplineName(AActor* InActor, FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromPositionListByCharacterName(FName InName, TArray<FRCScriptActorMoveInfo>& InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromPositionList(AActor* InActor, TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromPositionByCharacterName(FName InName, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromPosition(AActor* InActor, FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck, float TurnSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromPlayerByCharacterName(FName InName, float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw);
    
    UFUNCTION(BlueprintCallable)
    static void StartMoveFromPlayer(AActor* InActor, float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw, float TurnSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    static void StartMotionActor(AActor* InActor, FName InMotionName, const float InPlayRate, bool bLoop, float InSwitchDurationSec, bool bStartLoopMotion);
    
    UFUNCTION(BlueprintCallable)
    static void StartMotion(FName InName, FName InMotionName, bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoadModelListAutoName(FName& OutName, ESCCharacterModel CharacterModel, FName InPlayerStartName, FName InMotionName, bool bVisibleFlag, bool bScriptLoad);
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoadModelList(FName InName, ESCCharacterModel CharacterModel, FName InPlayerStartName, FName InMotionName, bool bVisibleFlag, bool bScriptLoad);
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoadAutoName(FName& OutName, FName InFilename, bool bVisibleFlag, bool bScriptLoad);
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoad(FName InName, FName InFilename, bool bVisibleFlag, bool bScriptLoad);
    
    UFUNCTION(BlueprintCallable)
    static bool StartCharcterSettingLoad(FName InSettingFilename);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibilityContainKakiwari(AActor* InActor, bool bVisibleFlag, bool bIsCollision);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibilityByCharacterName(FName InName, bool bVisibleFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibility(AActor* InActor, bool bVisibleFlag, bool bIsCollision);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewParam(AActor* InActor, const float InCanViewDistance, const float InCanViewAngle);
    
    UFUNCTION(BlueprintCallable)
    static void SetupAllBgCharacterMaterial();
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformTargetPointNameByCharacterName(FName InName, FName InPointName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformTargetPointName(AActor* InActor, FName InPointName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformPlayerStartNameByCharacterName(FName InName, FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformPlayerStartName(AActor* InActor, FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetTalkSettingByCharacterName(FName InName, float InTalkLength, float InSelifLength, float InBalloonLength, float InBalloonHeightOffset, float InBalloonAngleOffset, float InBalloonLengthOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetTalkSetting(AActor* InActor, float InTalkLength, float InSelifLength, float InBalloonLength, float InBalloonHeightOffset, float InBalloonAngleOffset, float InBalloonLengthOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetTalkInfoByCharacterName(FName InName, bool bInTalk, int32 InBalloonFrameType, int32 InBalloonType, FName InSelifTextId);
    
    UFUNCTION(BlueprintCallable)
    static void SetTalkInfo(AActor* InActor, bool bInTalk, int32 InBalloonFrameType, int32 InBalloonType, FName InSelifTextId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpecialSelectLookSetting(AActor* InActor, const float InEyeMoveSpeed, const float InEyeTranslateNearMax, const float InEyeTranslateFarMax, const float InEyeTranslateUpMax, const float InEyeTranslateDownMax);
    
    UFUNCTION(BlueprintCallable)
    static void SetPositionYawByCharacterName(FName InName, FVector InPosition, float InYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetPositionYaw(AActor* InActor, FVector InPosition, float InYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetPauseByCharacterName(FName InName, bool bPauseFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetPause(AActor* InActor, bool bPauseFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetOutlineWidth(AActor* InActor, const float InWidth);
    
    UFUNCTION(BlueprintCallable)
    static void SetOrientRotationtoMovementFlag(AActor* InActor, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetNoDelayLookProcessFlag(AActor* InActor, bool bState);
    
    UFUNCTION(BlueprintCallable)
    static void SetNewAnimBP(AActor* InActor, UClass* InNewAnimClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetMovNearPlayerHide(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMovePause(AActor* InActor, bool bInMovePause);
    
    UFUNCTION(BlueprintCallable)
    static void SetMoveMobDraw(bool bInDraw);
    
    UFUNCTION(BlueprintCallable)
    static void SetLookAtPosition(AActor* InActor, const FVector InLookAtTargetPos);
    
    UFUNCTION(BlueprintCallable)
    static void SetLookAtCharacterFace(AActor* InActor, const AActor* InLookAtTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetLookAtActor(AActor* InActor, const AActor* InLookAtTargetActor, const FName InLookAtTargetBoneName);
    
    UFUNCTION(BlueprintCallable)
    static void SetExtraIdle(AActor* InActor, bool bState);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultLookSetting(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterAttatchmentFormId(FName InName, FName InCharacterAttatchmentFormId);
    
    UFUNCTION(BlueprintCallable)
    static void SetCenterActorType(ERCCharacterProxyCenterActorType InType);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanBlink(AActor* InActor, bool bState);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraFadeEnable(AActor* InActor, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraAlphaLengh(int32 InLengthMin, int32 InLengthMax);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoOutlineWidth(AActor* InActor, bool bAuto);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllVisibility(bool bVisibleFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllPause(bool bPauseFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllNoDelayLookProcessFlag(bool bState);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreRotationYawByCharacterName(FName InName, float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreRotationYaw(AActor* InActor, float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreMovePositionByCharacterName(FName InName, float SpeedScale);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreMovePosition(AActor* InActor, float SpeedScale);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreMoveListByCharacterName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreMoveList(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMoveByCharacterName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMove(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void ResetEventMotion(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCameraAlphaLength();
    
    UFUNCTION(BlueprintCallable)
    static void ReservePlayMotion(const FName InName, const FName InMotionName, bool bStartLoopMotion);
    
    UFUNCTION(BlueprintCallable)
    static void ReserveAppearance(const FName InName, FName InBodyColorPaletteId, FName InFaceColorPaletteId, FName InSoliderNumberId, FName InEyeId, FName InSkinId);
    
    UFUNCTION(BlueprintCallable)
    static void Release(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void PlayLipsyncMotion(AActor* InActor, const FName InMotionName, bool bLoop, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    static void PlayLipsyncBasedOnLines(AActor* InActor, float InLineCharacters, const float InLineDisplaySec, const float InLineIntervalAjust);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoveMobDraw();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoveEnd(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMotionBlend(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoadComplete(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoadActorComplete(const TArray<FName>& InCheckCharacterNameArray);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinishedMotion(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistOutCurrentMotion(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllLoadComplete();
    
    UFUNCTION(BlueprintCallable)
    static void InitShinigamiPosition(float InLength, float InHeight, float InAngle);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetShinigamiActor();
    
    UFUNCTION(BlueprintCallable)
    static bool GetFinishChangeRimLight(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFacial2DMotionNameList(const FName InFacial2DId, TArray<FName>& OutMotionNameList);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCharacterAttatchmentFormId(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetActorContainKakiwari(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetActor(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteHoldingHand(AActor* InActor, const AActor* InTaegetActor);
    
    UFUNCTION(BlueprintCallable)
    static void EventFinishedOutMotion(AActor* InActor, const float InBlendSec);
    
    UFUNCTION(BlueprintCallable)
    static void DetachAttachment(AActor* InActor, const EAttachPlaceType InPlaceType, const FVector InPutPos);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeRimLight(AActor* InActor, const FLinearColor InOutlineColor, const float InOutlineCoverageValue, const float InOutlineSmoothValue, const float InRimLightDurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFacial(AActor* InActor, const FName InFacialName, bool bAllowFlowLiquid);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeDecalParentSocket(AActor* InActor, const FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeColorPatternOnEventForActor(AActor* InActor, const FName InEventFacialColorName, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeColorPatternOnEvent(const FName InCharacterName, const FName InEventFacialColorName, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeAttachmentAnimation(AActor* InActor, const EAttachPlaceType InPlaceType, const ERCAttachAnimType InAnimationType);
    
    UFUNCTION(BlueprintCallable)
    static void Blink(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void BackupMovePositionByCharacterName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void BackupMovePosition(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToUlity05(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToUlity04(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToUlity03(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToUlity02(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToUlity01(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToSpine(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToRightHand(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToPelvis(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToOverhead(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToMouth(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToLeftHand(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToHead(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void AttachActorToEye(AActor* InActor, AActor* InAttachment, const FName InColorParretId, const FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyEventHairSpecular(const FName InCharacterName, const float InEventHairSpecularX, const float InEventHairSpecularY, const float InEventHairSpecularZ);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyEventEmissive(const FName InCharacterName, const float InEventEmissiveValue);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyColorPalette(AActor* InActor, const FName InColorPaletteId, const FName InFaceColorPaletteId, const FName InSoliderNumberId, const FName InEyeId, const FName InSkinId);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyCharacterMaterial(const FName InMaterialId);
    
};

