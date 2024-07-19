#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "Waruagaki_QuestionShowFinishDelegateDelegate.h"
#include "RCNzWaruagaki_Question.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzWaruagaki_Question : public URCUiWidgetBase {
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
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaruagaki_QuestionShowFinishDelegate WaruagakiQuestionShowFinishDelegate;
    
    URCNzWaruagaki_Question();

    UFUNCTION(BlueprintCallable)
    void PlayWaruagakiQuestionShowAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayWaruagakiQuestionFinishAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeQuestionText(const FString& Heading, const FString& question);
    
};

