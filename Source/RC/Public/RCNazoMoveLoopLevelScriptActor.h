#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/EngineTypes.h"
#include "ERCNazoMoveLoopLSAState.h"
#include "ERCNazoMoveLoopLSATalkState.h"
#include "RCNazoLoopLevelScriptActor.h"
#include "RCNazoMoveLoopLSACameraData.h"
#include "RCNazoMoveLoopLSAFollowerData.h"
#include "RCNazoMoveLoopLSALevelData.h"
#include "RCNazoMoveLoopLSAPlayerData.h"
#include "RCNazoMoveLoopLSATalkData.h"
#include "RCNazoMoveLoopLevelScriptActor.generated.h"

class AActor;
class ARCCineCameraActor;
class UDataTable;

UCLASS(Blueprintable)
class RC_API ARCNazoMoveLoopLevelScriptActor : public ARCNazoLoopLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoMoveLoopLSAState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TalkDelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SettingsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSALevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSAPlayerData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSACameraData CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSATalkData TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSAFollowerData FollowerData;
    
public:
    ARCNazoMoveLoopLevelScriptActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TalkStartTextEvent(int32 TextIndex, FName TextID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TalkStartedEvent(FName TalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TalkFinishedEvent(FName TalkID);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishMoveLoop();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTalkStateEvent(ERCNazoMoveLoopLSATalkState TalkState, FName TalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeStateEvent(ERCNazoMoveLoopLSAState MoveLoopState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangePlayerSpeed(float Speed, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraFromTag(FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraBaseFromTag(FName CameraBaseTag, FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraBase(AActor* CameraBase, ARCCineCameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCamera(ARCCineCameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBackCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
};

