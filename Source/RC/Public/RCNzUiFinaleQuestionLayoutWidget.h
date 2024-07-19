#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleQuestionLayoutWidget.generated.h"

class URCNzUiFinaleQuestionIconWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleQuestionLayoutWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinaleQuestionIconWidget*> IconWidgetList;
    
    URCNzUiFinaleQuestionLayoutWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateAtQuestionIcon(int32 Index, bool isCheck);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllQuestionIcon(const TArray<bool>& isCheckList);
    
    UFUNCTION(BlueprintCallable)
    void InitializeQuestionLayoutWidget();
    
    UFUNCTION(BlueprintCallable)
    void HiddenAllQuestionIcon();
    
};

