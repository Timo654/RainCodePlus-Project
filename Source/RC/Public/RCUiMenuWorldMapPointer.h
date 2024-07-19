#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuWorldMapPointer.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuWorldMapPointer : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Img_Pointer;
    
public:
    URCUiMenuWorldMapPointer();

    UFUNCTION(BlueprintCallable)
    void StartDefault();
    
    UFUNCTION(BlueprintCallable)
    void OnMark();
    
    UFUNCTION(BlueprintCallable)
    void OffMark();
    
    UFUNCTION(BlueprintCallable)
    void InitializeWorldMapPointer();
    
    UFUNCTION(BlueprintCallable)
    void FinishOverlap();
    
    UFUNCTION(BlueprintCallable)
    void FinishDefault();
    
    UFUNCTION(BlueprintCallable)
    void FinishCursor();
    
};

