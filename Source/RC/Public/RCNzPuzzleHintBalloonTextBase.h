#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzPuzzleHintBalloonTextBase.generated.h"

class USpTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzPuzzleHintBalloonTextBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpTextBlock* TextBlock;
    
public:
    URCNzPuzzleHintBalloonTextBase();

    UFUNCTION(BlueprintCallable)
    void SetHintText(const FText Text);
    
    UFUNCTION(BlueprintCallable)
    void InitializePuzzleHintBalloonText();
    
    UFUNCTION(BlueprintCallable)
    FText GetHintText();
    
};

