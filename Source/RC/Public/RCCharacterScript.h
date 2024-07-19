#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCActorQuestType.h"
#include "RCCharacter.h"
#include "RCScriptActorFootIKData.h"
#include "RCScriptActorHitReactionData.h"
#include "RCScriptActorHitReactionSettings.h"
#include "RCScriptActorMoveInfo.h"
#include "RCScriptActorTurnData.h"
#include "RCScriptActorTurnInfo.h"
#include "RCScriptActorTurnSettings.h"
#include "RCCharacterScript.generated.h"

class URCCharacterMovementComponent;
class URCScriptActorComponent;

UCLASS(Blueprintable)
class RC_API ARCCharacterScript : public ARCCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCScriptActorComponent* ScriptActorComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartPlayerEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLevelSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDirectionComplement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionComplementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDirectionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAntiDirectionComplement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionComplementSpeedRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnSettings TurnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnInfo TurnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorTurnData TurnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorHitReactionSettings HitReactionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorHitReactionData HitReactionData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugScriptDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKakiwari;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerLookAtFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelifTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalloonFrameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalloonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelifLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonLengthOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DrawLayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LoadAfterPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelifDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBalloonDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCActorQuestType QuestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestTitleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNowPlayerLookAtFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWalkSpline;
    
public:
    ARCCharacterScript(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopRotation();
    
    UFUNCTION(BlueprintCallable)
    void StopMove();
    
    UFUNCTION(BlueprintCallable)
    void StartTurnYaw(float InYaw, float InSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void StartTurnWorldDirection(const FVector& InTurnDirection, float InSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void StartTurnFromTargetPointName(FName InPointName, float InSpeedScale, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    void StartTurnFromPosition(FVector InPosition, float InSpeedScale, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    void StartTurnFromCharacter(FName InTargetCharacterName, float InSpeedScale, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    void StartTurn(const float InAngle, float InSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationYaw(float Yaw, float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromCharacter(FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeedScale, bool bPlayerCheck, float TurnSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromSplineName(FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPositionList(TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck, float TurnSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPlayer(float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw, float TurnSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformTargetPointName(FName InPointName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformPlayerStartName(FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionYaw(FVector InPosition, float InYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientRotationtoMovementFlag(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(float InWalkSpeed, float InRunSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMovePause(bool bInMovePause);
    
    UFUNCTION(BlueprintCallable)
    void RestoreRotationYaw(float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void RestoreMovePosition(float SpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void RestoreMoveList();
    
    UFUNCTION(BlueprintCallable)
    void ResetMove();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URCCharacterMovementComponent* GetRCCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMoveSpeed();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxVelocityLengthInFrames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRCScriptActorFootIKData GetFootIKData();
    
    UFUNCTION(BlueprintCallable)
    float GetDirectionAmount();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorLocationFoot();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorLocationBalloon();
    
    UFUNCTION(BlueprintCallable)
    void EndTurn();
    
    UFUNCTION(BlueprintCallable)
    void BackupMovePosition();
    
};

