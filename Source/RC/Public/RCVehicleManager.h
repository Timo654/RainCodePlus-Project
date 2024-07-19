#pragma once
#include "CoreMinimal.h"
#include "EVehicleLaneType.h"
#include "RCActor.h"
#include "RCRunningVehicleData.h"
#include "RCVehicleManager.generated.h"

class AActor;
class ARCVehicleTarget;

UCLASS(Blueprintable)
class RC_API ARCVehicleManager : public ARCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> vehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCRunningVehicleData> runningVehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> lane1Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> lane2Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> lane3Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> lane4Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> lane5Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> lane6Array;
    
public:
    ARCVehicleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetLaneTargetArray(EVehicleLaneType laneType, TArray<AActor*> laneTargetArray);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableVehicleArray(TArray<AActor*> enableVehicleArray);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableEngineSound(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetRunningVehicleForLane(EVehicleLaneType laneType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRCRunningVehicleData> GetRunningVehicleArray();
    
    UFUNCTION(BlueprintCallable)
    ARCVehicleTarget* GetLaneStartTarget(EVehicleLaneType laneType);
    
    UFUNCTION(BlueprintCallable)
    TArray<ARCVehicleTarget*> GetLaneRootTargetArray(EVehicleLaneType laneType);
    
    UFUNCTION(BlueprintCallable)
    ARCVehicleTarget* GetLaneEndTarget(EVehicleLaneType laneType);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetEnabledVehicleArray();
    
    UFUNCTION(BlueprintCallable)
    void CheckFinishedVehicle();
    
    UFUNCTION(BlueprintCallable)
    void AddRunningVehicle(AActor* pVehicle, EVehicleLaneType laneType);
    
};

