#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCReUiChousaEndButtonGuide.generated.h"

class URCUiButtonGuideParts;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiChousaEndButtonGuide : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* WBP_ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChousaEndButtonGuideID;
    
public:
    URCReUiChousaEndButtonGuide();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeChousaEndButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

