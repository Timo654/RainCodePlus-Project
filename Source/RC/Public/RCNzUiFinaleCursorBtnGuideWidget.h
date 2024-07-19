#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleCursorBtnGuideWidget.generated.h"

class URCUiButtonGuideParts;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleCursorBtnGuideWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* BtnGuideParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Btn_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Btn_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisibleState;
    
public:
    URCNzUiFinaleCursorBtnGuideWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateBtnGuide(ERCInputKeyType Key, const FString& GuideStr, bool visible);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinaleCursorBtnGuide();
    
};

