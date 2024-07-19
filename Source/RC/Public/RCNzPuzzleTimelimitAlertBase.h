#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "RCUiWidgetBase.h"
#include "RCNzPuzzleTimelimitAlertBase.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzPuzzleTimelimitAlertBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OffAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isStartAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent StartAnimFinishedDelegate;
    
public:
    URCNzPuzzleTimelimitAlertBase();

    UFUNCTION(BlueprintCallable)
    void StartAlert();
    
    UFUNCTION(BlueprintCallable)
    void InitializePuzzleTimelimitAleart();
    
    UFUNCTION(BlueprintCallable)
    void AN_StartFinished();
    
};

