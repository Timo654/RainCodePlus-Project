#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFinalePieceState.h"
#include "PiecePickFinishedDelegate.h"
#include "PieceUnlockFinishedDelegate.h"
#include "RCNzFinalePieceObjectInfo.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePieceList_PieceBase.generated.h"

class URCNzUiFinalePieceLayoutWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePieceList_PieceBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFinalePieceState CurrentPieceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzFinalePieceObjectInfo PieceObjectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceLayoutWidget* ownerLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceUnlockFinished PieceUnlockFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPiecePickFinished PiecePickFinishedDelegate;
    
    URCNzUiFinalePieceList_PieceBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRockState();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePiece(FRCNzFinalePieceObjectInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPieceState(bool IsSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPieceImage(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnLockAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPickAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDone();
    
    UFUNCTION(BlueprintCallable)
    void InitializePiece(FRCNzFinalePieceObjectInfo Info, URCNzUiFinalePieceLayoutWidget* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPieceWBPSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetPieceWBPScale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetPieceImgSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPieceImgAngle();
    
    UFUNCTION(BlueprintCallable)
    float GetPieceDegree();
    
    UFUNCTION(BlueprintCallable)
    EFinalePieceState GetCurrentPieceState();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCurrentPieceState(EFinalePieceState targetState);
    
};

