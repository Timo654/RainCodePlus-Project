#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUiWidgetAccessable.h"
#include "RCReUiChousaTargetName.generated.h"

class UImage;
class UOverlay;
class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiChousaTargetName : public URCUiWidgetAccessable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TargetName_Line;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TargetName_PL;
    
public:
    URCReUiChousaTargetName();

    UFUNCTION(BlueprintCallable)
    void TargetOn();
    
    UFUNCTION(BlueprintCallable)
    void TargetOff();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetNamePositionDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetNamePosition(FVector2D InTargetNamePosition);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetNameMoveSpeed(float InTargetNameMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetNameDefaultPosition(FVector2D InTargetNameDefaultPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetName(const FString& InTargetName);
    
    UFUNCTION(BlueprintCallable)
    void InitializeChousaTargetName2(FVector2D InTargetNameDefaultPosition, float InTargetNameMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void InitializeChousaTargetName();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetTargetNameSize();
    
    UFUNCTION(BlueprintCallable)
    void ApplyTargetNamePosition();
    
};

