#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "RCNzSceneChangeLoadingWidget.generated.h"

UCLASS(Blueprintable)
class RCLOADINGSCREEN_API URCNzSceneChangeLoadingWidget : public UWidget {
    GENERATED_BODY()
public:
    URCNzSceneChangeLoadingWidget();

    UFUNCTION(BlueprintCallable)
    bool Start();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayNum(int32 in_Num);
    
    UFUNCTION(BlueprintCallable)
    bool Finish();
    
};

