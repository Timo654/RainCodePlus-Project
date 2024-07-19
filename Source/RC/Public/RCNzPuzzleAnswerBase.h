#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzPuzzleAnswerBase.generated.h"

class UImage;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzPuzzleAnswerBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Answer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_UnAnswered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AnswerTextImg;
    
    URCNzPuzzleAnswerBase();

    UFUNCTION(BlueprintCallable)
    void SetAnswer(FName wordText, UTexture2D* wordTexture);
    
    UFUNCTION(BlueprintCallable)
    void InitializePuzzleAnswerBase();
    
};

