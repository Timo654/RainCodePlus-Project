#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiSavingIcon.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiSavingIcon : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
public:
    URCUiSavingIcon();

    UFUNCTION(BlueprintCallable)
    void StartSave();
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCloseFlag(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSave();
    
};

