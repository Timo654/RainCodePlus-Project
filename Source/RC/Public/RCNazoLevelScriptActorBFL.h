#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCNazoLevelScriptActorBFL.generated.h"

class ALevelScriptActor;
class ARCNazoLevelScriptActor;

UCLASS(Blueprintable)
class RC_API URCNazoLevelScriptActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCNazoLevelScriptActorBFL();

    UFUNCTION(BlueprintCallable)
    static void StartScene(FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseScene(FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseCurrentScene();
    
    UFUNCTION(BlueprintCallable)
    static void LoadScene(FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    static void LoadNextScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoadSceneCompleted(FName SceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentSceneVisibleCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentSceneReady();
    
    UFUNCTION(BlueprintCallable)
    static void GotoTitle(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCNazoLevelScriptActor* GetLevelScriptActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ALevelScriptActor* GetCurrentSceneLevelScriptActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCurrentSceneID();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeScene(bool& bSuccess, FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeNextScene(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFirstScene(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCheckPointSceneAtGameOver(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCheckPointScene(bool& bSuccess);
    
};

