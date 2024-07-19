#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/PlayerCameraManager.h"
#include "RCCMNEventBFL.generated.h"

class AActor;
class ARCCineCameraActor;

UCLASS(Blueprintable)
class RC_API URCCMNEventBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCMNEventBFL();

    UFUNCTION(BlueprintCallable)
    static void WalkSpline(AActor* InActor, AActor* InSplineActor, float InTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamYaw(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamVpZ(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamVpY(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InY);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamRoll(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InRoll);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamPitch(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InPitch);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamMoveZ(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamMoveY(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InY);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamMoveX(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InX);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamFocusOffset(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InFocusOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamFocalLength(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InFocalLength);
    
    UFUNCTION(BlueprintCallable)
    static void SetCamDistance(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InDistance);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCharacter(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void InitCharacter(AActor* InActor, const FName InTargetPointName);
    
    UFUNCTION(BlueprintCallable)
    static void CamSwitchBufReset(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex);
    
    UFUNCTION(BlueprintCallable)
    static void CamSwitchBlend(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex, const float InBlendTime, TEnumAsByte<EViewTargetBlendFunction> InBlendFunc, const float InBlendExp);
    
    UFUNCTION(BlueprintCallable)
    static void CamSwitch(TArray<ARCCineCameraActor*> InCamList, const int32 InCamIndex);
    
};

