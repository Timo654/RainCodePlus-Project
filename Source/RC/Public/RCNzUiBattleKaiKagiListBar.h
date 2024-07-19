#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiListBarStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiListBar.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiListBar : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_kaikagiName;
    
public:
    URCNzUiBattleKaiKagiListBar();

    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bInVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetKaiKagiName(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayWaitAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiListBar();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleKaiKagiListBarStatus GetBattleKaiKagiListBarStatus();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    bool bChangeSpeed;
};

