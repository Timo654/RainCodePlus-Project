#pragma once
#include "CoreMinimal.h"
#include "RCParamNzFinaleSectionTableRow.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleIndexListParentWidget.generated.h"

class ARCNzFinaleManagerBase;
class URCNzUiFinaleIndexListWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleIndexListParentWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleIndexListWidget* IndexListUI;
    
public:
    URCNzUiFinaleIndexListParentWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateIndexList(FRCParamNzFinaleSectionTableRow Section, int32 idx, ARCNzFinaleManagerBase* FinaleManager);
    
    UFUNCTION(BlueprintCallable)
    void InitializeIndexList(const FString& chNumStr);
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinaleIndexListWidget* GetIndexListUI();
    
};

