#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionBarComboBox.generated.h"

class URCUiOptionBarComboBoxItemList;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionBarComboBox : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_SlideOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_SlideOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiOptionBarComboBoxItemList* MenuItemList;
    
public:
    URCUiOptionBarComboBox();

    UFUNCTION(BlueprintCallable)
    void OnMenuOpenChangedEvent(bool bIsOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnClickItemEvent(int32 ind);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClickEvent();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetComboBoxListWidget();
    
};

