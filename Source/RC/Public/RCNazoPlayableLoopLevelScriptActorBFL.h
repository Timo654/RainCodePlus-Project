#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCNazoPlayableLoopLevelScriptActorBFL.generated.h"

class ARCNazoPlayableLoopLevelScriptActor;

UCLASS(Blueprintable)
class RC_API URCNazoPlayableLoopLevelScriptActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCNazoPlayableLoopLevelScriptActorBFL();

    UFUNCTION(BlueprintCallable)
    static bool PlayableLoopWarp();
    
    UFUNCTION(BlueprintCallable)
    static void PlayableLoopSetFreeMoveSkipEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayableLoopOpenFrontWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PlayableLoopGetWarpCount();
    
    UFUNCTION(BlueprintCallable)
    static bool PlayableLoopFinishLoop();
    
    UFUNCTION(BlueprintCallable)
    static bool PlayableLoopCloseBehindWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PlayableLoopCheckFinishedBehindWallClosed();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCNazoPlayableLoopLevelScriptActor* GetPlayableLoopLevelScriptActor();
    
};

