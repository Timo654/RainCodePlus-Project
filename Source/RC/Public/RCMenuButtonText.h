#pragma once
#include "CoreMinimal.h"
#include "RCMenuButton.h"
#include "RCMenuButtonText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuButtonText : public URCMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemListText;
    
public:
    URCMenuButtonText();

    UFUNCTION(BlueprintCallable)
    void OnPreviousItem();
    
    UFUNCTION(BlueprintCallable)
    void OnNextItem();
    
};

