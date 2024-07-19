#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleIndexBTNGuideWidget.generated.h"

class UImage;
class URCUiButtonGuideParts;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleIndexBTNGuideWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* ButtonGuideParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BtnGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BaseImage;
    
public:
    URCNzUiFinaleIndexBTNGuideWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitingOpen();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeButtonGuide(ERCInputKeyType InKeyType, const FString& str);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BTNGuideOpenEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BTNGuideCloseEvent();
    
};

