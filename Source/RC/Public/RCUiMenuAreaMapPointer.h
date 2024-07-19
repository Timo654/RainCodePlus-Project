#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuAreaMapPointer.generated.h"

class UImage;
class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuAreaMapPointer : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Txt_PlaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Img_Pointer;
    
public:
    URCUiMenuAreaMapPointer();

    UFUNCTION(BlueprintCallable)
    void StartDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetIconText(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void OnMark();
    
    UFUNCTION(BlueprintCallable)
    void OffMark();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMapPointer();
    
    UFUNCTION(BlueprintCallable)
    float GetWidgetRadius();
    
    UFUNCTION(BlueprintCallable)
    void FinishOverlap();
    
    UFUNCTION(BlueprintCallable)
    void FinishDefault();
    
    UFUNCTION(BlueprintCallable)
    void FinishCursor();
    
};

