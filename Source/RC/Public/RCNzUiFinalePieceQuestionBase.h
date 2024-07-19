#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePieceQuestionBase.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePieceQuestionBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* WindowMat;
    
public:
    URCNzUiFinalePieceQuestionBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestion(const bool IsVisible, const FString& QuestionText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetQuestionTextPosition(const FVector2D& Position, const bool isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializePieceQuestion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishPieceQuestion();
    
};

