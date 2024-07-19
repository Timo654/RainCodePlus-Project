#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FinaleDetectiveAllInteractEndAnimFinishedDelegate.h"
#include "FinaleDetectiveAllInteractStartAnimFinishedDelegate.h"
#include "RCNzFinaleGamePieceData.h"
#include "RCNzUiFinaleInteractImgInfo.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleDetectiveSceneWidget.generated.h"

class URCNzUiFinaleInteractIconWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleDetectiveSceneWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float backgroundImgScaleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float backgroundImgScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinaleInteractIconWidget*> InteractIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinaleInteractIconWidget*> InOutAnimPlayInteractIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle initAnimTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 initAnimIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InOutAnimPlayListCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseInOutAnimFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleDetectiveAllInteractStartAnimFinished AllStartAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleDetectiveAllInteractEndAnimFinished AllEndAnimFinished;
    
    URCNzUiFinaleDetectiveSceneWidget();

    UFUNCTION(BlueprintCallable)
    void UpdatePieceImgInfo(const TArray<FRCNzUiFinaleInteractImgInfo>& PieceImgInfoList);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePieceImg(const TMap<FName, UTexture2D*> PieceImgList);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePieceData(const TArray<FRCNzFinaleGamePieceData>& pieceList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDetectiveScene(const UTexture2D* Img);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDetectiveScene(const UTexture2D* Img);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleDetectiveScene(const bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBackgroundImgScale(float ScaleX, float ScaleY);
    
    UFUNCTION(BlueprintCallable)
    bool PlayStartAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayInitPieceList();
    
    UFUNCTION(BlueprintCallable)
    bool PlayEndAnim();
    
    UFUNCTION(BlueprintCallable)
    bool IsUseInOutAnim();
    
    UFUNCTION(BlueprintCallable)
    void InteractStartFinished();
    
    UFUNCTION(BlueprintCallable)
    void InteractEndFinished();
    
    UFUNCTION(BlueprintCallable)
    void InitializeDetectiveScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenDetectiveScene();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, UTexture2D*> GetPieceImgList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FRCNzUiFinaleInteractImgInfo> GetPieceImgInfoList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FRCNzFinaleGamePieceData> GetInteractPieceDataList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetInteractIDList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetInteractIconNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<URCNzUiFinaleInteractIconWidget*> GetInteractIconList();
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinaleInteractIconWidget* GetCurrentDetectiveSceneInteractPointPos(bool& Result);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetBackgroundImgScale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearAddImageList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddImage(const UTexture2D* Img);
    
};

