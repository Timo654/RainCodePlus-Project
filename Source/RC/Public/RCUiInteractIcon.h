#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiInteractIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiInteractIcon : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiInteractIcon();

    UFUNCTION(BlueprintCallable)
    void WaitOutside();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectable(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void OpenText(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void OpenSelectable(bool bInShowSubQuest, bool bInMoveable, const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bInShowSubQuest, bool bInMoveable);
    
    UFUNCTION(BlueprintCallable)
    void InitializeInteractIcon();
    
    UFUNCTION(BlueprintCallable)
    int32 GetInteractStatusInt();
    
    UFUNCTION(BlueprintCallable)
    void FinishSelectable();
    
    UFUNCTION(BlueprintCallable)
    void CloseText();
    
    UFUNCTION(BlueprintCallable)
    void CloseSelectable();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

