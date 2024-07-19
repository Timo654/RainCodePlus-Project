#pragma once
#include "CoreMinimal.h"
#include "RCMenuButton.h"
#include "RCNzUiBattleGameOverSelectBar.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleGameOverSelectBar : public URCMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OnCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OffCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_000;
    
public:
    URCNzUiBattleGameOverSelectBar();

    UFUNCTION(BlueprintCallable)
    void Unselect();
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bInVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void Select();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectBar();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

