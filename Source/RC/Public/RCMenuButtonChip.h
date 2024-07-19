#pragma once
#include "CoreMinimal.h"
#include "OnRCMenuButtonChipDecidedEventDelegate.h"
#include "RCMenuWidget.h"
#include "RCMenuButtonChip.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuButtonChip : public URCMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRCMenuButtonChipDecidedEvent OnDecided;
    
    URCMenuButtonChip();

    UFUNCTION(BlueprintCallable)
    void OnValueUpKey();
    
    UFUNCTION(BlueprintCallable)
    void OnValueNonMin();
    
    UFUNCTION(BlueprintCallable)
    void OnValueNonMax();
    
    UFUNCTION(BlueprintCallable)
    void OnValueMin();
    
    UFUNCTION(BlueprintCallable)
    void OnValueMax();
    
    UFUNCTION(BlueprintCallable)
    void OnValueDownKey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDecide();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSelect();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNormal();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDecide();
    
};

