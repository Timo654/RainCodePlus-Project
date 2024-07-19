#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ERCNazoPlayableLoopLSAState.h"
#include "RCNazoLoopLevelScriptActor.h"
#include "RCNazoPlayableLoopLSABehindWallData.h"
#include "RCNazoPlayableLoopLSACameraData.h"
#include "RCNazoPlayableLoopLSAFollowerData.h"
#include "RCNazoPlayableLoopLSALevelData.h"
#include "RCNazoPlayableLoopLSAPlayerData.h"
#include "RCNazoPlayableLoopLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNazoPlayableLoopLevelScriptActor : public ARCNazoLoopLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoPlayableLoopLSAState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSALevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSAPlayerData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSACameraData CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSAFollowerData FollowerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSABehindWallData BehindWallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedWarpNextFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarpFinishedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestOpenFrontWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestCloseBehindWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestFinishLoop;
    
public:
    ARCNazoPlayableLoopLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WarpFinishedEvent(int32 WarpCount);
    
    UFUNCTION(BlueprintCallable)
    bool Warp();
    
    UFUNCTION(BlueprintCallable)
    bool OpenFrontWall();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWarpCount();
    
    UFUNCTION(BlueprintCallable)
    bool FinishLoop();
    
    UFUNCTION(BlueprintCallable)
    bool CloseBehindWall();
    
    UFUNCTION(BlueprintCallable)
    bool CheckFinishedBehindWallClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeStateEvent(ERCNazoPlayableLoopLSAState PlayableLoopState);
    
};

