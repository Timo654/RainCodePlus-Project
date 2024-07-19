#pragma once
#include "CoreMinimal.h"
#include "EPageGuideType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePageGuideWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePageGuideWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPageGuideType pageType;
    
public:
    URCNzUiFinalePageGuideWidget();

    UFUNCTION(BlueprintCallable)
    void UpdatePageGuide(EPageGuideType Type, bool isCurrentPage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimQuestionS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimQuestionL();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDefaultS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDefaultL();
    
    UFUNCTION(BlueprintCallable)
    void InitializePageGuide(EPageGuideType Type);
    
    UFUNCTION(BlueprintCallable)
    void ChangePageGuideState(const bool IsSelect);
    
};

