#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/PlayerCameraManager.h"
#include "RCNazoMoveLoopLevelScriptActorBFL.generated.h"

class AActor;
class ARCCineCameraActor;
class ARCNazoMoveLoopLevelScriptActor;

UCLASS(Blueprintable)
class RC_API URCNazoMoveLoopLevelScriptActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCNazoMoveLoopLevelScriptActorBFL();

    UFUNCTION(BlueprintCallable)
    static bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCNazoMoveLoopLevelScriptActor* GetMoveLoopLevelScriptActor();
    
    UFUNCTION(BlueprintCallable)
    static void FinishMoveLoop();
    
    UFUNCTION(BlueprintCallable)
    static void ChangePlayerSpeed(float Speed, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCameraFromTag(FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCameraBaseFromTag(FName CameraBaseTag, FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCameraBase(AActor* CameraBase, ARCCineCameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCamera(ARCCineCameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeBackCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
};

