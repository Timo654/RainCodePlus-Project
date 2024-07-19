#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCReUiChousaSpotSelectTelop.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiChousaSpotSelectTelop : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
public:
    URCReUiChousaSpotSelectTelop();

    UFUNCTION(BlueprintCallable)
    void Open();
    bool bChangeSpeed;
    UFUNCTION(BlueprintCallable)
    void InitializeSpotSelectTelop();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

