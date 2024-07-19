#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/PlayerCameraManager.h"
#include "RCCameraBlueprintFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class RC_API URCCameraBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCameraBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerCamera(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoceCameraAngle(float A, float va);
    
    UFUNCTION(BlueprintCallable)
    static void SetFakeLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraAnglePlayerBack(float va);
    
    UFUNCTION(BlueprintCallable)
    static void SetActivationCameraWithBlendParam(FName Tag, FViewTargetTransitionParams Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetActivationCamera(FName Tag, bool Blend, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActivationCamera(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFakeLocation();
    
    UFUNCTION(BlueprintCallable)
    static void ReActivationCamera(bool Blend);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoadingCamra();
    
    UFUNCTION(BlueprintCallable)
    static FName GetCurrentCameraTag();
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetCurrentCamera();
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraVAngle();
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraAngle();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAcvivationCamera(FName Tag);
    
};

