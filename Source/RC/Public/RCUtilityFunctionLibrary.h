#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCUtilityFunctionLibrary.generated.h"

class AActor;
class ARCCameraManager;
class ARCPlayerCameraManager;
class ARCPlayerController;

UCLASS(Blueprintable)
class RC_API URCUtilityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCUtilityFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetToonDirectionalLightRotatorOffset(const FRotator InRotatorOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetToonDirectionalLightInfo(AActor* InCameraActor, const FRotator InRotatorOffset);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRainRot(FRotator Rot);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRainForce(int32 Force);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRainColorTable(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetDrawRain(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCascadeRainColorIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCascadeRainColor(FName Map, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void ResetToonDirectionalLightInfo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCameraACtor(AActor* act);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetToonDirectionalLightRotatorOffset();
    
    UFUNCTION(BlueprintCallable)
    static ARCPlayerController* GetRCPlayerController();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameVersion();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentArea();
    
    UFUNCTION(BlueprintCallable)
    static ARCPlayerCameraManager* GeRCPlayerCameraManager();
    
    UFUNCTION(BlueprintCallable)
    static ARCCameraManager* GeRCCameraManager();
    
};

