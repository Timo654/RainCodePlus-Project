#pragma once
#include "CoreMinimal.h"
#include "RCUiWidget3D.h"
#include "RCReUiChousaTarget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiChousaTarget : public URCUiWidget3D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OnSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OffSelection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvestigated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAccessible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectClose;
    
public:
    URCReUiChousaTarget();

    UFUNCTION(BlueprintCallable)
    void StartSelect();
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bInIsInvestigated);
    
    UFUNCTION(BlueprintCallable)
    void InitializeChousaTarget();
    
    UFUNCTION(BlueprintCallable)
    float GetWidgetRadius();
    
    UFUNCTION(BlueprintCallable)
    void FinishSelect();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

