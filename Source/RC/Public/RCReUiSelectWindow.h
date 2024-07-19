#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Geometry.h"
#include "RCMenuManager.h"
#include "RCReUiSelectWindow.generated.h"

class APlayerController;
class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiSelectWindow : public URCMenuManager {
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
    UTextLayoutWidget* Txt_Question;
    
public:
    URCReUiSelectWindow();

protected:
    UFUNCTION(BlueprintCallable)
    void StartPush();
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectWindowCustomNavigation(EUINavigation InNavigation, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Open(int32 SelectNum, FName InTextID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeSelectBar();
    
};

