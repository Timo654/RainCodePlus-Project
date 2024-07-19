#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCTitleLicense.generated.h"

class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleLicense : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Left;
    
public:
    URCTitleLicense();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeLicense();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

