#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Geometry.h"
#include "RCMenuManager.h"
#include "RCUiGenericButton.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiGenericButton : public URCMenuManager {
    GENERATED_BODY()
public:
    URCUiGenericButton();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* WindowNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void StartPush();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonTextID(FName InCancelTextID, FName InDecideTextID);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bInIsFocusedTrue, bool bInIsAcceptCancel, int32 InValidButtonNum, bool bInIsUseDefaultTextID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeGenericButton();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

