#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagi.generated.h"

class URCNzUiBattleKaiKagiName;
class URCNzUiBattleKaiKagiSelectButton;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagi : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_KaikagiChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagiName* kaikagiName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagiSelectButton* KaiKagiSelectButton;
    
public:
    URCNzUiBattleKaiKagi();

    UFUNCTION(BlueprintCallable)
    void SetKaiKagiName(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagi();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleKaiKagiStatus GetBattleKaiKagiStatus();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ChangeKaiKagi(FName InTextID);
    
};

