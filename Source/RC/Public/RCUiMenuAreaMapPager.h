#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuAreaMapPager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuAreaMapPager : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiMenuAreaMapPager();

    UFUNCTION(BlueprintCallable)
    void SetPagerItemActive(int32 InActiveIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInputFromButtonGuide(ERCInputKeyType InType);
    
};

