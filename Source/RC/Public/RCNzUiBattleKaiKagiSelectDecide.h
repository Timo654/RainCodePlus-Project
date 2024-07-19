#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiSelectDecide.generated.h"

class UButton;
class URCUiButtonGuideParts;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectDecide : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ButtonGuideText_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* WBP_ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ClickebleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Btn_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Btn_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimArray;
    
public:
    URCNzUiBattleKaiKagiSelectDecide();

    UFUNCTION(BlueprintCallable)
    void UninitializeBattleKaiKagiSelectDecide();
    
    UFUNCTION(BlueprintCallable)
    void SetMouseButtonEnable();
    
    UFUNCTION(BlueprintCallable)
    void SetMouseButtonDisable();
    
    UFUNCTION(BlueprintCallable)
    void SetInputFromButtonGuide(ERCInputKeyType InType);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseUnhoverdEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseHoverdEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseClickEvent();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectDecide();
    
};

