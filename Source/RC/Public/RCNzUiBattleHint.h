#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHintStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleHint.generated.h"

class URichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleHint : public URCUiWidgetBase {
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
    URichTextBlock* RTxt_HintText;
    
public:
    URCNzUiBattleHint();

    UFUNCTION(BlueprintCallable)
    void SetText(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleHint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCNzUiBattleHintStatus GetBattleHintStatus();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

