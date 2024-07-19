#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCAdvHUDBaseComponent.h"
#include "RCAdvHUDChangeAreaData.h"
#include "RCAdvHUDChangeAreaWidgetSet.h"
#include "RCAdvHUDEnterBuildingData.h"
#include "RCAdvHUDEnterBuildingWidgetSet.h"
#include "RCAdvHUDMapComponent.generated.h"

class ARCCheckActor;
class URCReUiLocation;
class URCReUiMiniMap;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCAdvHUDMapComponent : public URCAdvHUDBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEditInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMiniMapEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMiniMapHiddenByOption;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiMiniMap* MiniMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MiniMapLocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MiniMapTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocationEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiLocation* Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationDisplayLocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationDisplayTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationDisplayLastLocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationDisplayLastTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeAreaEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDChangeAreaWidgetSet> ChangeAreaWidgetSets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDChangeAreaWidgetSet> FreeChangeAreaWidgetSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeAreaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ChangeAreaTextPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeAreaMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingChangeAreaNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDChangeAreaData> ChangeAreaDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnterBuildingEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDEnterBuildingWidgetSet> EnterBuildingWidgetSets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDEnterBuildingWidgetSet> FreeEnterBuildingWidgetSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterBuildingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EnterBuildingTextPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnterBuildingMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingEnterBuildingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDEnterBuildingData> EnterBuildingDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBusStopEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDEnterBuildingWidgetSet> BusStopWidgetSets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDEnterBuildingWidgetSet> FreeBusStopWidgetSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BusStopScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BusStopTextPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BusStopMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingBusStopNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDEnterBuildingData> BusStopDatas;
    
public:
    URCAdvHUDMapComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLocation(bool bInMiniMap, bool bInLocation);
    
    UFUNCTION(BlueprintCallable)
    bool SetMiniMapLocation(FName InLocationID, FName InLocationTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniMapEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocationName(FName InLocationID, FName InLocationTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocationDisplayLocation(FName InLocationID, FName InLocationTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnterBuildingEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnterBuildingData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeAreaEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetChangeAreaData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInDrawText, float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetBusStopEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetBusStopData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInLooksLikeUsable, bool bInAccessable, float InScale);
    
    UFUNCTION(BlueprintCallable)
    bool LoadLocationDataName(FName InLocationID, FName InLocationTextID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnterBuildingVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeAreaVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusStopVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnterBuildingDataNum();
    
    UFUNCTION(BlueprintCallable)
    void GetEnterBuildingData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDEnterBuildingData& OutEnterBuildingData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMiniMapTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMiniMapLocationID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationDisplayTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationDisplayLocationID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChangeAreaDataNum();
    
    UFUNCTION(BlueprintCallable)
    void GetChangeAreaData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDChangeAreaData& OutChangeAreaData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBusStopDataNum();
    
    UFUNCTION(BlueprintCallable)
    void GetBusStopData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDEnterBuildingData& OutBusStopData);
    
    UFUNCTION(BlueprintCallable)
    void FinishLocation();
    
    UFUNCTION(BlueprintCallable)
    bool CheckMiniMapRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMiniMapEnableScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMiniMapEnable();
    
    UFUNCTION(BlueprintCallable)
    bool CheckLocationStarted(bool bInMiniMap, bool bInLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CheckLocationRunning();
    
    UFUNCTION(BlueprintCallable)
    bool CheckLocationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLocationEnable();
    
    UFUNCTION(BlueprintCallable)
    bool CheckEnterBuildingEnable();
    
    UFUNCTION(BlueprintCallable)
    bool CheckChangeAreaEnable();
    
    UFUNCTION(BlueprintCallable)
    bool CheckBusStopEnable();
    
};

