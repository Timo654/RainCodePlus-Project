#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiButtonGuide.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiButtonGuide : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
public:
    URCUiButtonGuide();

    UFUNCTION(BlueprintCallable)
    void StartRun();
    
    UFUNCTION(BlueprintCallable)
    void SetInputFromButtonGuide(ERCInputKeyType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetGuideText(FName InModeID, bool bInShowSingleLine);
    
    UFUNCTION(BlueprintCallable)
    void Open(FName InModeID, bool bInShowSingleLine);
    
    UFUNCTION(BlueprintCallable)
    void InitializeButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

