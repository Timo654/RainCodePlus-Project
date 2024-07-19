#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzPuzzleQuestionBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzPuzzleQuestionBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCNzPuzzleQuestionBase();

    UFUNCTION(BlueprintCallable)
    void SetQuestion(const FText wordText);
    
    UFUNCTION(BlueprintCallable)
    void InitializePuzzleQuestion();
    
};

