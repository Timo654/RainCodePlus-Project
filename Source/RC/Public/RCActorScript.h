#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCActor.h"
#include "RCScriptActorMoveInfo.h"
#include "RCActorScript.generated.h"

class URCScriptActorComponent;

UCLASS(Blueprintable)
class RC_API ARCActorScript : public ARCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCScriptActorComponent* ScriptActorComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugScriptDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKakiwari;
    
public:
    ARCActorScript(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartRotationYaw(float Yaw, float SpeedScale, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationFromCharacter(FName InTargetCharacterName, float SpeedScale, FVector InOffsetPos, float InOffsetYaw, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromTargetPointName(FName InPointName, float SpeedScale, FVector InOffsetPos, bool bEndChangeYaw, float InOffsetYaw, float InChangeYawSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPositionList(TArray<FRCScriptActorMoveInfo> InMoveInfoList, int32 StartMoveInfoNum, bool bEndChangeYaw, float InOffsetYaw, bool bFirstWarp, bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveFromPosition(FVector InPosition, float SpeedScale, float InOffsetYaw, bool bEndChangeYaw, FVector EndChangeYawPosition);
    
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
    void BackupMovePosition();
    
};

