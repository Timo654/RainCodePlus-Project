#pragma once
#include "CoreMinimal.h"
#include "EVehicleCrossWalkState.h"
#include "EVehicleLaneType.h"
#include "RCActor.h"
#include "RCVehicleController.generated.h"

class AActor;
class ARCCrossWalkController;
class ARCVehicleManager;
class ARCVehicleTarget;

UCLASS(Blueprintable)
class RC_API ARCVehicleController : public ARCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 popUpCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 popUpCountMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 runningVehicleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName vehicleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> vehicleRoadTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> vehicleStartTargetTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> vehicleEndTargetTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> movingCharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCrossWalkController* crossWalkController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCVehicleManager* pVehicleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 popUpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prevPopUpLane;
    
public:
    ARCVehicleController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool PopUpVehicle(ARCVehicleTarget* pInitStartTarget, EVehicleLaneType laneType);
    
    UFUNCTION(BlueprintCallable)
    bool isOpenCrossWalk();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    int32 GetVehicleRateIndex(TArray<int32> rateArray);
    
    UFUNCTION(BlueprintCallable)
    EVehicleCrossWalkState GerNearCrossWalk(AActor* pCheckActor);
    
    UFUNCTION(BlueprintCallable)
    void CheckPopUpCount();
    
    UFUNCTION(BlueprintCallable)
    void CheckFinishVehicle();
    
    UFUNCTION(BlueprintCallable)
    void CheckCrossWalkLength();
    
};

