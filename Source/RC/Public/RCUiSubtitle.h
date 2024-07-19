#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUiWidgetBase.h"
#include "RCUiSubtitle.generated.h"

class URCReUiMessageCursor;
class UTextLayoutWidget;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiSubtitle : public URCUiWidgetBase {
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
    UTextLayoutWidget* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* TextLine_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiMessageCursor* MsgCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* Nag_Message_Grp;
    
public:
    URCUiSubtitle();

    UFUNCTION(BlueprintCallable)
    void WaitingOpen();
    
    UFUNCTION(BlueprintCallable)
    void Wait();
    
    UFUNCTION(BlueprintCallable)
    void UndoDisplaceSubtitle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartShow();
    
    UFUNCTION(BlueprintCallable)
    void StartDelay();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetText(const FString& InName, const FString& inString, float InDelay, bool bInOnlyCursor);
    
    UFUNCTION(BlueprintCallable)
    void Open_WaitPush(bool bInEnableSkipVoice);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSubtitle();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSubtitleStatusNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipVoice();
    
    UFUNCTION(BlueprintCallable)
    void DisplaceSubtitle(FVector2D InVector);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void CallEndVoice();
    
    UFUNCTION(BlueprintCallable)
    void CallDelay();
    
};

