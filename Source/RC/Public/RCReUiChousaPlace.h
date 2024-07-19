#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCReUiChousaPlace.generated.h"

class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiChousaPlace : public URCUiWidgetBase {
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
    UTextLayoutWidget* Text_Place;
    
public:
    URCReUiChousaPlace();

protected:
    UFUNCTION(BlueprintCallable)
    bool SetChousaPlace(FName InMapID, FName InAreaNameID);
    
public:
    UFUNCTION(BlueprintCallable)
    void Open(FName InMapID, FName InAreaNameID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeChousaPlace();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

