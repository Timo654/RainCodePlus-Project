#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RCReSceneChangeTestWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RCLOADINGSCREEN_API URCReSceneChangeTestWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URCReSceneChangeTestWidget();

    UFUNCTION(BlueprintCallable)
    bool Start();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayNum(int32 in_Num);
    
    UFUNCTION(BlueprintCallable)
    bool Finish();
    
};

