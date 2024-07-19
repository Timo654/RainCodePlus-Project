#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleDetectiveTitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleDetectiveTitleWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCNzUiFinaleDetectiveTitleWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTitle(const int32& SectionName, const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSectionText(const FString& sectionText1, const FString& sectionText2);
    
};

