#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleCursorWidget.generated.h"

class UCanvasPanel;
class URCNzUiFinaleCursorBtnGuideWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleCursorWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* topCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStart;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleCursorBtnGuideWidget* BtnGuideParts;
    
    URCNzUiFinaleCursorWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateCursorVisibleState();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCursorBtnGuide(ERCInputKeyType Key, bool IsVisible, const FString& GuideStr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnSelectAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySelectAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinaleCursorWidget();
    
    UFUNCTION(BlueprintCallable)
    void CursorStart();
    
    UFUNCTION(BlueprintCallable)
    void CursorFinish();
    
};

