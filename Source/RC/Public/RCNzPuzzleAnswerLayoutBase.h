#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzPuzzleAnswerLayoutBase.generated.h"

class UHorizontalBox;
class URCNzPuzzleAnswerBase;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzPuzzleAnswerLayoutBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* answerListHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzPuzzleAnswerBase*> WordList;
    
    URCNzPuzzleAnswerLayoutBase();

    UFUNCTION(BlueprintCallable)
    void SetWordList(int32 Length);
    
    UFUNCTION(BlueprintCallable)
    void SetAnswer(int32 wordPos, FName wordText, UTexture2D* wordTexture);
    
    UFUNCTION(BlueprintCallable)
    void InitializePuzzleAnswerLayout();
    
    UFUNCTION(BlueprintCallable)
    void ClearWordList();
    
};

