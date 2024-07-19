#pragma once
#include "CoreMinimal.h"
#include "PieceDetailFinishApplyBlock_DoneDelegate.h"
#include "PieceDetailFinishApplyBlock_LockDelegate.h"
#include "PieceDetailFinishApplyFinishDelegate.h"
#include "PieceDetailFinishApplyStartDelegate.h"
#include "PieceDetailFinishUnlockDelegate.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePieceDetailWidget.generated.h"

class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePieceDetailWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_ApplyStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_ApplyFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_ApplyBlock_Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_ApplyBlock_Done;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceDetailFinishApplyStart FinishApplyStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceDetailFinishApplyFinish FinishApplyFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceDetailFinishApplyBlock_Lock FinishApplyBlock_Lock;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceDetailFinishApplyBlock_Done FinishApplyBlock_Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceDetailFinishUnlock FinishUnlock;
    
    URCNzUiFinalePieceDetailWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDetailInfo(const FString& titile, const UTexture2D* PieceImg, const UTexture2D* lockNum, const bool isLock, const bool isUsed, const bool isUnlockAnim);
    
    UFUNCTION(BlueprintCallable)
    void StartOpen();
    
    UFUNCTION(BlueprintCallable)
    void StartFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDone();
    
    UFUNCTION(BlueprintCallable)
    void PlayApplyStart();
    
    UFUNCTION(BlueprintCallable)
    void PlayApplyFinish();
    
    UFUNCTION(BlueprintCallable)
    void PlayApplyBlock_Lock();
    
    UFUNCTION(BlueprintCallable)
    void PlayApplyBlock_Done();
    
};

