#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCUiMenuContents.generated.h"

class APlayerController;
class UDataTable;
class URCParamMenuContentsListData;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuContents : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamMenuContentsListData* ContentsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ContentsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataTablePath;
    
public:
    URCUiMenuContents();

protected:
    UFUNCTION(BlueprintCallable)
    void StartPush();
    
public:
    UFUNCTION(BlueprintCallable)
    void Open(bool bInSelectDefault);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMenuContents();
    
    UFUNCTION(BlueprintCallable)
    void ContentsButtonCustomNavigation(EUINavigation InNavigation, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

