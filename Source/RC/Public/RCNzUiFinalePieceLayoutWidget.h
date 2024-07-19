#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERCInputKeyType.h"
#include "FinaleChangeSelectPieceDelegate.h"
#include "RCNzFinalePieceObjectInfo.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePieceLayoutWidget.generated.h"

class ARCNzFinaleManagerBase;
class URCNzUiFinalePieceDetailWidget;
class URCNzUiFinalePieceList_PieceBase;
class URCNzUiFinalePieceNameWidget;
class URCUiButtonGuideParts;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePieceLayoutWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceNameWidget* PieceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceDetailWidget* PieceDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PieceSListParentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PieceSListParentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinalePieceList_PieceBase*> PieceSList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinalePieceList_PieceBase*> PieceLList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPieceListVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PieceListPieceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> RockNumTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> SmallRockNumTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RockNumTexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SmallRockNumTexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* BtnGuideParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ButtonGuideBaseImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isHoverdPieceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PieceLockImgNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockAnimPlayPieceListIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayUnlockAnimTiming;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleChangeSelectPiece ChangedSelectPieceDelegate;
    
    URCNzUiFinalePieceLayoutWidget();

    UFUNCTION(BlueprintCallable)
    void WaitingOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectPieceIdx(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnlockCurrentSelectPiece();
    
    UFUNCTION(BlueprintCallable)
    void UdpatePieceLayoutBtnGuide(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void StartUnlockAnimPieceSlist(TArray<int32> pieceList);
    
    UFUNCTION(BlueprintCallable)
    void StartUnlockAnimPieceList(TArray<int32> pieceList);
    
    UFUNCTION(BlueprintCallable)
    void StartOpen();
    
    UFUNCTION(BlueprintCallable)
    void StartFinish();
    
    UFUNCTION(BlueprintCallable)
    void SetIsHoverdPieceList(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetDelayUnLockAnimTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnLockSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PieceLayoutOpenEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPieceSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    FRCNzFinalePieceObjectInfo LoadPieceImage(ARCNzFinaleManagerBase* FinaleManager, FRCNzFinalePieceObjectInfo targetInfo, bool isSmall);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisiblePieceList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDetailPieceListMode();
    
    UFUNCTION(BlueprintCallable)
    void InitializePieceLayout();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetRockNumTexture(int32 RockNum, bool isSmall);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPlayUnlockAnimPieceLList(bool& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPieceSLocAndSize(int32 idx, FVector2D& Loc, FVector2D& Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPieceSListParentLocAndSize(FVector2D& Loc, FVector2D& Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetPieceListLScale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetPieceListLParentSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPieceListLAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<URCNzUiFinalePieceList_PieceBase*> GetPieceListItemLArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPieceLCenterPosition(int32 ind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetOneLinePieceItemNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsHoverdPieceList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentSelectedPieceIdx();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRCNzFinalePieceObjectInfo GetCurrentSelectedInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishUnlockSListAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishUnlockAnimPieceLList();
    
    UFUNCTION(BlueprintCallable)
    void CallChangeSelectPieceDelegate(FRCNzFinalePieceObjectInfo Info, bool isUnlock);
    
};

