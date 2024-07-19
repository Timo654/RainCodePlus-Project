#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiSelectPartsAnimType.h"
#include "RCMenuButton.h"
#include "RCNzUiBattleKaiKagiSelectBar.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectBar : public URCMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiName_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimArray;
    
public:
    URCNzUiBattleKaiKagiSelectBar();

    UFUNCTION(BlueprintCallable)
    void Unselect();
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bInVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetKaiKagiName(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void Select();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim(ERCNzUiBattleKaiKagiSelectPartsAnimType InAnimType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectBar();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

