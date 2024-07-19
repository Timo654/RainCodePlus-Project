#pragma once
#include "CoreMinimal.h"
#include "RCGenericWindowOnFinishEventDelegate.h"
#include "RCUiWidgetBase.h"
#include "RCUiGenericWindow.generated.h"

class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiGenericWindow : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Center_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Center_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Center_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Center_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Guide;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCGenericWindowOnFinishEvent OnFinishEvent;
    
    URCUiGenericWindow();

    UFUNCTION(BlueprintCallable)
    void WaitingOpen();
    
    UFUNCTION(BlueprintCallable)
    void Wait();
    
    UFUNCTION(BlueprintCallable)
    void SetWindowTextIDs(TArray<FName> InTextIDArray);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowTextID(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowStrings(TArray<FString> InStringArray);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonTextID(FName InCancelTextID, FName InDecideTextID);
    
    UFUNCTION(BlueprintCallable)
    void OpenSingleButton();
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bInIsShowButton, bool bInIsFocusTrue, bool bInIsAcceptCancel, bool bInIsUseDefaultTextID);
    
    UFUNCTION(BlueprintCallable)
    bool IsGetButtonResult();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishGenericWindow();
    
    UFUNCTION(BlueprintCallable)
    void InitializeGenericWindow();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

