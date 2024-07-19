#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "RCReSceneChangeLoadingWidget.generated.h"

UCLASS(Blueprintable)
class RCLOADINGSCREEN_API URCReSceneChangeLoadingWidget : public UWidget {
    GENERATED_BODY()
public:
    URCReSceneChangeLoadingWidget();

    UFUNCTION(BlueprintCallable)
    bool Start();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayNum(int32 in_Num);
    
    UFUNCTION(BlueprintCallable)
    bool Finish();
    
};

