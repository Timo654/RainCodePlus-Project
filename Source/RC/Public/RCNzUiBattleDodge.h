#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleDodgeStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleDodge.generated.h"

class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleDodge : public URCUiWidgetBase {
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
    UUserWidget* DodgeBTN;
    
public:
    URCNzUiBattleDodge();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleDodge();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleDodgeStatus GetBattleDodgeStatus();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

