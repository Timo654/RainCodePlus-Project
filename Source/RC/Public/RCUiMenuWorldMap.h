#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCInputKeyType.h"
#include "ERCInputPlatform.h"
#include "RCMenuManager.h"
#include "RCUiMenuWorldMap.generated.h"

class UDataTable;
class URCParamMenuWorldMapListData;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuWorldMap : public URCMenuManager {
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
    UWidgetAnimation* AN_Select_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Select_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Select_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Select_OnCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Select_OutCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Select_OnCursor_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamMenuWorldMapListData* WorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldMapTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WorldMapClickableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointerMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* SoftwareCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* BufferCursor;
    
public:
    URCUiMenuWorldMap();

    UFUNCTION(BlueprintCallable)
    void WaitingOpen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartPush();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenAreaSelect(bool bInIsBusMenu);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishSelectStartAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishOnCursorAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishGenericWindow(bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeInputPlatform(ERCInputPlatform InInputPlatform);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideBackButtonClick(ERCInputKeyType InKeyType);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeMenuWorldMap();
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishTutorial();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseAreaSelect();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

