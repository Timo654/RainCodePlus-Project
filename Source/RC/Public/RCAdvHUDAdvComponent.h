#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ERCAdvHUDCutInSEType.h"
#include "ERCAdvHUDCutInType.h"
#include "ERCAdvHUDWidgetRequest.h"
#include "RCAdvHUDBaseComponent.h"
#include "RCAdvHUDCutInAnimData.h"
#include "RCAdvHUDCutInData.h"
#include "RCAdvHUDMarkerData.h"
#include "RCAdvHUDMarkerWidgetSet.h"
#include "RCAdvHUDAdvComponent.generated.h"

class ARCCheckActor;
class URCReSubQuest;
class URCReUiFigureInformation;
class URCUiCutIn;
class URCUiCutInAnim;
class URCUiCutInText;
class URCUiDetPoint;
class URCUiIntSubQuest;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCAdvHUDAdvComponent : public URCAdvHUDBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEditInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDMarkerWidgetSet> MarkerWidgetSets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDMarkerWidgetSet> FreeMarkerWidgetSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerTextPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerSubquestScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerSubquestPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingMarkerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDMarkerData> MarkerDatas;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCUiIntSubQuest*> SubquestWidgets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCUiIntSubQuest*> FreeSubquestWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubquestNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingSubquestNum;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCReSubQuest*> SubquestInformationWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubquestInformationWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiFigureInformation* FigureInformationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FigureInformationWidgetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DetPointWidgetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DetPointWidgetPriority_NzResult;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiDetPoint* DetPointWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest CutInRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CutInWidgetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCAdvHUDCutInData> CutInDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentCutInID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDCutInType CurrentCutInType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDCutInSEType CurrentCutInSEType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutInAnimSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutInDelayFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutInDelayFinishDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CutInTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCAdvHUDCutInAnimData> CutInAnimDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutInAnimReleaseWBPAtFinished;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiCutIn* CutInWidget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiCutIn* CutInFullScreenWidget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiCutInText* CutInTextWidget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiCutInAnim* CutInAnimWidget;
    
public:
    URCAdvHUDAdvComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkerVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarkerDataNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetMarkerData(int32 InIndex, FRCAdvHUDMarkerData& OutMarkerData);
    
    UFUNCTION(BlueprintCallable)
    bool DetPointStart(int32 InPoint, bool InIsOpenedNzResult);
    
    UFUNCTION(BlueprintCallable)
    bool DetPointFinish();
    
    UFUNCTION(BlueprintCallable)
    bool CutInStart(FName InCutInID);
    
    UFUNCTION(BlueprintCallable)
    bool CutInFinish();
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimStartLoad(FName InCutInID);
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimStart(FName InCutInID, bool bInReleaseWBPAtFinished);
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimRelease(FName InCutInID);
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimNext();
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimAllRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDetPointCheckStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDetPointCheckFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInAnimNextEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInAnimLoadCompleted(FName InCutInID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInAnimFinishedAnim();
    
};

