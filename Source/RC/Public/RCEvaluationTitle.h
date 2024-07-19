#pragma once
#include "CoreMinimal.h"
#include "EEvaluationTitleState.h"
#include "ETITLE_SELECT.h"
#include "RCUiWidgetBase.h"
#include "RCEvaluationTitle.generated.h"

class URCEvaluationTitleLoad;
class URCEvaluationTitleStart;
class URCEvaluationTitleWalkThrough;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCEvaluationTitle : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCEvaluationTitleStart* WBP_StartEvaluationVersion_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCEvaluationTitleLoad* WBP_StartEvaluationVersion_Load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCEvaluationTitleWalkThrough* WBP_StartEvaluationVersion_Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvaluationTitleState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETITLE_SELECT selectResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCancel;
    
public:
    URCEvaluationTitle();

    UFUNCTION(BlueprintCallable)
    void PlayWaitAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayStartAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeData();
    
};

