#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCActorQuestType.h"
#include "ERCCharacterBallonPositionType.h"
#include "RCPawn.h"
#include "RCScriptActorMoveInfo.h"
#include "RCPawnScript.generated.h"

class URCParamCharacterBallonPositionData;
class URCScriptActorComponent;

UCLASS(Blueprintable)
class RC_API ARCPawnScript : public ARCPawn {
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
    bool bIsLevelSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugScriptDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKakiwari;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelifTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalloonFrameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalloonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCCharacterBallonPositionType BallonPositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBallonPositionTypeCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamCharacterBallonPositionData* BallonPositionData;
    
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
    
public:
    ARCPawnScript(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMove();
    
    UFUNCTION(BlueprintCallable)
    void StartRotationYaw(float Yaw, float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromCharacter(FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeedScale, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromSplineName(FName InSplineName, float StartDistanceRange, bool bReverse, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPositionList(TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition, bool bPlayerCheck);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPlayer(float InLength, float InAngle, float InHeight, float SpeedScale, bool bEndPlayerYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformTargetPointName(FName InPointName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformPlayerStartName(FName InPlayerStartTagName, FVector InOffsetPos, float InOffsetYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionYaw(FVector InPosition, float InYaw);
    
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
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorLocationFoot();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorLocationBalloon();
    
    UFUNCTION(BlueprintCallable)
    void BackupMovePosition();
    
};

