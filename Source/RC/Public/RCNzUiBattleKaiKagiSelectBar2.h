#pragma once
#include "CoreMinimal.h"
#include "RCMenuButton.h"
#include "RCNzUiBattleKaiKagiSelectBar2.generated.h"

class URCNzUiBattleKaiKagiSelectEquip;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectBar2 : public URCMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagiSelectEquip* WBP_NzKaikagiSel_Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_UnSelect;
    
public:
    URCNzUiBattleKaiKagiSelectBar2();

    UFUNCTION(BlueprintCallable)
    void Unselect(bool bInStart);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bInVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetKaiKagiName(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void Select(bool bInStart);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelect();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectBar();
    
};

