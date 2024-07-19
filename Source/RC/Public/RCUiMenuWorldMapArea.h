#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuWorldMapArea.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuWorldMapArea : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Def;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OnCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OutCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_NotSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_New_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_NotSelect_Shadow;
    
public:
    URCUiMenuWorldMapArea();

    UFUNCTION(BlueprintCallable)
    void ShowOff();
    
    UFUNCTION(BlueprintCallable)
    void ShowNewArea();
    
    UFUNCTION(BlueprintCallable)
    void ShowDefault();
    
    UFUNCTION(BlueprintCallable)
    void Push();
    
    UFUNCTION(BlueprintCallable)
    void OutCursor();
    
    UFUNCTION(BlueprintCallable)
    void OnCursor();
    
    UFUNCTION(BlueprintCallable)
    void NotSelectShadow();
    
    UFUNCTION(BlueprintCallable)
    void NotSelect();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMenuWorldMapArea();
    
};

