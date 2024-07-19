#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiOptionBarComboBoxItemList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiOptionBarComboBoxItemList : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListMaxNum;
    
    URCUiOptionBarComboBoxItemList();

    UFUNCTION(BlueprintCallable)
    void SyncListSize();
    
    UFUNCTION(BlueprintCallable)
    void OnItemEnterEvent(int32 ind);
    
};

