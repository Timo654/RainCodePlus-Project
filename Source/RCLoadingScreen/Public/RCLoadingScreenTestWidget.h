#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RCLoadingScreenTestWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RCLOADINGSCREEN_API URCLoadingScreenTestWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URCLoadingScreenTestWidget();

    UFUNCTION(BlueprintCallable)
    bool Start();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayNum(int32 in_Num);
    
    UFUNCTION(BlueprintCallable)
    bool Finish();
    
};

