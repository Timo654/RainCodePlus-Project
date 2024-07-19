#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuNextTarget.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuNextTarget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_NextTarget;
    
public:
    URCUiMenuNextTarget();

    UFUNCTION(BlueprintCallable)
    void SetNextTargetID(FName InTargetID);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMenuNextTarget();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

